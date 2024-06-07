// src/Coloria.cpp
#include "Coloria.h"

namespace Coloria {
    String hexToAnsi(const char* hex, bool isBackground) {
        int r, g, b;
        if (sscanf(hex, "%02x%02x%02x", &r, &g, &b) != 3) {
            return String(RESET); // Return reset if the hex code is invalid
        }
        char ansiCode[16];
        if (isBackground) {
            snprintf(ansiCode, sizeof(ansiCode), "\033[48;2;%d;%d;%d", r, g, b);
        } else {
            snprintf(ansiCode, sizeof(ansiCode), "\033[38;2;%d;%d;%d", r, g, b);
        }
        return String(ansiCode);
    }

    void print(const char* color, const char* message) {
        Serial.print(color);
        Serial.print(message);
        Serial.print(RESET);
    }

    void println(const char* color, const char* message) {
        Serial.print(color);
        Serial.println(message);
        Serial.print(RESET);
    }

    void print(const char* color, const char* formatting, const char* message) {
        Serial.print(color);
        Serial.print(formatting);
        Serial.print(message);
        Serial.print(RESET);
    }

    void println(const char* color, const char* formatting, const char* message) {
        Serial.print(color);
        Serial.print(formatting);
        Serial.println(message);
        Serial.print(RESET);
    }

    void printHex(const char* hex, const char* message, bool isBackground) {
        String ansiCode = hexToAnsi(hex, isBackground);
        Serial.print(ansiCode.c_str());
        Serial.print(message);
        Serial.print(RESET);
    }

    void printlnHex(const char* hex, const char* message, bool isBackground) {
        String ansiCode = hexToAnsi(hex, isBackground);
        Serial.print(ansiCode.c_str());
        Serial.println(message);
        Serial.print(RESET);
    }

    void printAligned(const char* color, const char* message, const char* alignment, int width) {
        int len = strlen(message);
        int padding = width - len;
        if (padding <= 0) {
            Serial.print(color);
            Serial.print(message);
            Serial.print(RESET);
            return;
        }

        if (strcmp(alignment, "center") == 0) {
            int leftPadding = padding / 2;
            int rightPadding = padding - leftPadding;
            for (int i = 0; i < leftPadding; ++i) Serial.print(' ');
            Serial.print(color);
            Serial.print(message);
            Serial.print(RESET);
            for (int i = 0; i < rightPadding; ++i) Serial.print(' ');
        } else if (strcmp(alignment, "right") == 0) {
            for (int i = 0; i < padding; ++i) Serial.print(' ');
            Serial.print(color);
            Serial.print(message);
            Serial.print(RESET);
        } else {
            Serial.print(color);
            Serial.print(message);
            Serial.print(RESET);
            for (int i = 0; i < padding; ++i) Serial.print(' ');
        }
    }

    void printlnAligned(const char* color, const char* message, const char* alignment, int width) {
        printAligned(color, message, alignment, width);
        Serial.println();
    }
}
