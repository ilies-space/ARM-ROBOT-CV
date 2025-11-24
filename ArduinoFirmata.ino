/*
 * ARDUINO FIRMATA SETUP FOR ARM ROBOT CV PROJECT
 * 
 * IMPORTANT: This project uses StandardFirmata, which is a built-in example
 * in the Arduino IDE. You do NOT need to use this file directly.
 * 
 * INSTEAD, follow these steps:
 * 
 * 1. Open Arduino IDE
 * 2. Go to: File → Examples → Firmata → StandardFirmata
 * 3. Select your Arduino board:
 *    - Tools → Board → Arduino Uno (or your board type)
 * 4. Select your USB port:
 *    - Tools → Port → [Your Port Name]
 *    - On Mac: /dev/tty.usbmodem* or /dev/cu.usbmodem*
 *    - On Windows: COM3, COM4, etc.
 *    - On Linux: /dev/ttyUSB0, /dev/ttyACM0, etc.
 * 5. Click the Upload button (→)
 * 6. Wait for "Done uploading" message
 * 
 * WHAT IS FIRMATA?
 * 
 * Firmata is a communication protocol that allows you to control an Arduino
 * remotely via serial communication. Instead of writing custom Arduino code,
 * StandardFirmata enables the Arduino to receive commands from Python (via
 * PyFirmata) to control pins, servos, sensors, etc.
 * 
 * FOR THIS PROJECT:
 * 
 * StandardFirmata enables control of:
 * - Servo motors on pins 9 and 10 (X and Y axes)
 * - Any other digital/analog pins if needed
 * 
 * The Python script (HandController.py) sends servo angle commands to the
 * Arduino, which then controls the servos accordingly.
 * 
 * NO CUSTOM ARDUINO CODE NEEDED!
 * 
 * Once StandardFirmata is uploaded, your Arduino is ready to receive commands
 * from HandController.py. You don't need to write any custom Arduino code.
 * 
 * TROUBLESHOOTING:
 * 
 * - If upload fails: Check board and port selection
 * - If servos don't move: Verify Firmata uploaded successfully
 * - If connection fails: Check port name in HandController.py matches your system
 * 
 * For more information about Firmata:
 * https://github.com/firmata/protocol
 */

// This file is for documentation purposes only.
// Use the StandardFirmata example from Arduino IDE instead.
