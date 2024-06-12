#include "ColoriaExample.h"

Coloria::Coloria() {
  // Initialize Serial communication with error handling
  Serial.begin(9600);
  unsigned long startTime = millis();
  while (!Serial) {
    if (millis() - startTime > 5000) { // 5 seconds timeout
      Serial.println("Error: Serial connection failed.");
      return;
    }
  }
}

void Coloria::printColoredText(const char* text, const char* color) {
  Serial.print(color);
  Serial.print(text);
  Serial.println(RESET);
}

void Coloria::printFormattedText(const char* text, const char* format) {
  Serial.print(format);
  Serial.print(text);
  Serial.println(RESET);
}