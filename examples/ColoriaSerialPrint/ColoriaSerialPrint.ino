/*
  Coloria Example Sketch
  This example demonstrates the use of the Coloria library for printing colored
  and formatted text to the Arduino Serial Monitor. The Coloria library supports
  various text colors and formatting options such as bold, underline, and reverse text.

  In this example:
  - We initialize the Coloria library.
  - Print text in various colors (red, green, blue, yellow, cyan, magenta).
  - Print text with different formatting options (bold, underline, reversed).

  Usage:
  1. Connect your Arduino to the computer and open the Arduino IDE.
  2. Open the Serial Monitor (Tools -> Serial Monitor).
  3. Set the baud rate to 9600.

  Created by Angel C., 2024.
  This code is in the public domain.
*/

// Colors will not appear in the Arduino Serial Monitor

#include <Arduino.h>
#include <Coloria.h>

void setup() {
    Serial.begin(9600); // Set baud rate for Arduino boards
    while (!Serial) {
        // Wait for Serial to be ready
    }

    // Disable ANSI for Arduino Serial Monitor
    Coloria::enableAnsi(false);

    // Print example messages
    Coloria::println(Coloria::RED, "This is a red text.");
    Coloria::println(Coloria::GREEN, "This is a green text.");
    Coloria::println(Coloria::BLUE, "This is a blue text.");
    Coloria::println(Coloria::YELLOW, "This is a yellow text.");
    Coloria::println(Coloria::CYAN, "This is a cyan text.");
    Coloria::println(Coloria::MAGENTA, "This is a magenta text.");

    // Print with different formatting options
    Coloria::println(Coloria::BOLD, "This is bold text.");
    Coloria::println(Coloria::UNDERLINE, "This is underlined text.");
    Coloria::println(Coloria::REVERSE, "This is reversed text.");

    // Print with HEX color code
    Coloria::printlnHex("FF5733", "This is a text with HEX color #FF5733.");
    Coloria::printlnHex("00FF00", "This text has a green background.", true);

    // Print aligned text
    Coloria::printlnAligned(Coloria::BLUE, "This text is centered.", "center", 40);
}

void loop() {
    // Loop code here
}
