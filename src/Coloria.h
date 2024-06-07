#ifndef COLORIA_H
#define COLORIA_H

#include <Arduino.h>

namespace Coloria {
    // Formatting codes
    const char* const RESET = "\033[0m";
    const char* const BOLD = "\033[1m";
    const char* const DIM = "\033[2m";
    const char* const ITALIC = "\033[3m";
    const char* const UNDERLINE = "\033[4m";
    const char* const BLINK = "\033[5m";
    const char* const REVERSE = "\033[7m";
    const char* const HIDDEN = "\033[8m";
    const char* const STRIKETHROUGH = "\033[9m";

    // Standard foreground colors
    const char* const BLACK = "\033[30m";
    const char* const RED = "\033[31m";
    const char* const GREEN = "\033[32m";
    const char* const YELLOW = "\033[33m";
    const char* const BLUE = "\033[34m";
    const char* const MAGENTA = "\033[35m";
    const char* const CYAN = "\033[36m";
    const char* const WHITE = "\033[37m";

    const char* const BRIGHT_BLACK = "\033[90m";
    const char* const BRIGHT_RED = "\033[91m";
    const char* const BRIGHT_GREEN = "\033[92m";
    const char* const BRIGHT_YELLOW = "\033[93m";
    const char* const BRIGHT_BLUE = "\033[94m";
    const char* const BRIGHT_MAGENTA = "\033[95m";
    const char* const BRIGHT_CYAN = "\033[96m";
    const char* const BRIGHT_WHITE = "\033[97m";

    // Standard background colors
    const char* const BG_BLACK = "\033[40m";
    const char* const BG_RED = "\033[41m";
    const char* const BG_GREEN = "\033[42m";
    const char* const BG_YELLOW = "\033[43m";
    const char* const BG_BLUE = "\033[44m";
    const char* const BG_MAGENTA = "\033[45m";
    const char* const BG_CYAN = "\033[46m";
    const char* const BG_WHITE = "\033[47m";

    const char* const BG_BRIGHT_BLACK = "\033[100m";
    const char* const BG_BRIGHT_RED = "\033[101m";
    const char* const BG_BRIGHT_GREEN = "\033[102m";
    const char* const BG_BRIGHT_YELLOW = "\033[103m";
    const char* const BG_BRIGHT_BLUE = "\033[104m";
    const char* const BG_BRIGHT_MAGENTA = "\033[105m";
    const char* const BG_BRIGHT_CYAN = "\033[106m";
    const char* const BG_BRIGHT_WHITE = "\033[107m";

    // Color presets
    const char* const BOLD_RED = "\033[1;31m";
    const char* const UNDERLINE_GREEN = "\033[4;32m";
    const char* const BOLD_UNDERLINE_BLUE = "\033[1;4;34m";

    // Function declarations
    String hexToAnsi(const char* hex, bool isBackground = false);
    void print(const char* color, const char* message);
    void println(const char* color, const char* message);
    void print(const char* color, const char* formatting, const char* message);
    void println(const char* color, const char* formatting, const char* message);
    void printHex(const char* hex, const char* message, bool isBackground = false);
    void printlnHex(const char* hex, const char* message, bool isBackground = false);
    void printAligned(const char* color, const char* message, const char* alignment, int width);
    void printlnAligned(const char* color, const char* message, const char* alignment, int width);
}

#endif // End of Coloria.h
