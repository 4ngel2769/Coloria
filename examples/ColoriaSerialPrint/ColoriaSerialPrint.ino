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

#include <Arduino.h>
#include "ColoriaExample.h"

void setup() {
  // Initialize Coloria
  Coloria colorPrinter;

  // Print text in various colors
  colorPrinter.printColoredText("Hello, Red!", RED);
  colorPrinter.printColoredText("Hello, Green!", GREEN);
  colorPrinter.printColoredText("Hello, Blue!", BLUE);
  colorPrinter.printColoredText("Hello, Yellow!", YELLOW);
  colorPrinter.printColoredText("Hello, Cyan!", CYAN);
  colorPrinter.printColoredText("Hello, Magenta!", MAGENTA);

  // Print formatted text
  colorPrinter.printFormattedText("Bold Text", BOLD);
  colorPrinter.printFormattedText("Underlined Text", UNDERLINE);
  colorPrinter.printFormattedText("Reversed Text", REVERSED);
}

void loop() {
  // Nothing to do here
}
