# RFID-smart-door-lock-with-data-logging
#This contains the description of RFID smart door lock with data logging.
# Overview
Designed and implemented an RFID-Based door lock system. Integrated data logging feature, with data stored and analysed on Google sheets It is designed to provide secure access using RFID technology, with the added feature of data logging.

# Hardware Components
Esp8266
MFRC522 Module
Solenoid lock
Relay module
RFID tags
Buzzer
12V Battery
Breadboard

# Software Components
Arduino IDE for Esp8266
Google Sheets (for storing data logs)

first find the rfid tag number by connecting RFID READER RC522 to ESP8266 and by uploading a specific code.

# Connect the hardware components:
Follow the provided documentation to connect the MFRC522 Module, Esp8266, Solenoid, Relay, RFID tags, Buzzer, and the 12V Battery.

# Install necessary libraries
If using Arduino IDE, install the required libraries for the MFRC522 module and any other dependencies.

# Upload the code:
Upload the Arduino code to the Esp8266 using the Arduino IDE.

Usage
Users can present RFID tags to gain access through the doorlock. Access attempts are logged and stored in Google Sheets.

Configuration
Configure the WiFi settings in the Arduino code for Esp8266. Adjust any other settings as needed in the code for specific requirements.

