# RFID-Smart-Door-Lock-with-Data-Logging

## Overview
Designed and implemented an RFID-Based door lock system. Integrated data logging feature, with data stored and analyzed on Google Sheets. It is designed to provide secure access using RFID technology, with the added feature of data logging.

## Hardware Components
- Esp8266
- MFRC522 Module
- Solenoid lock
- Relay module
- RFID tags
- Buzzer
- 12V Battery
- Breadboard

## Software Components
- Arduino IDE for Esp8266
- Google Sheets (for storing data logs)

## First Step:Find the RFID Tag Number
- Connect the RFID READER RC522 to the ESP8266.
- Upload a specific code to identify the RFID tag number.

## Connect the Hardware Components
Follow the provided documentation to connect the MFRC522 Module, Esp8266, Solenoid, Relay, RFID tags, Buzzer, and the 12V Battery.

## Install Necessary Libraries
If using Arduino IDE, install the required libraries for the MFRC522 module and any other dependencies.

## Upload the Code
Upload the Arduino code to the Esp8266 using the Arduino IDE.

## Usage
Users can present RFID tags to gain access through the door lock. Access attempts are logged and stored in Google Sheets.

## Configuration
Configure the WiFi settings in the Arduino code for Esp8266. Adjust any other settings as needed in the code for specific requirements.
