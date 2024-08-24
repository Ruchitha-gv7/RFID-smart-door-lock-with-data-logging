/*connections 
RFID READER(RC522) TO ESP8266
SDA-----D2
RST----D1
SCK---D5
MOSI---D7
MISO---D6
3.3V---3V
GND---GND
*/


#define SS_PIN 4  // D2
#define RST_PIN 5 // D1
#include <SPI.h>
#include <MFRC522.h>

MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance/object

void setup() 
{
  Serial.begin(9600);   // Start serial communication
  SPI.begin();          // Init SPI bus
  mfrc522.PCD_Init();   // Init MFRC522
  Serial.println("Show your card:");
}

void loop() 
{
  // Look for new cards
  if ( !mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }

  // Select one of the cards
  if ( !mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }

  // Show UID on serial monitor
  Serial.print("UID tag: ");
  String content = "";
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
}
