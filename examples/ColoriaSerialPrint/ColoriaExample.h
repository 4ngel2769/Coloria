#ifndef COLORIAEXAMPLE_H
#define COLORIAEXAMPLE_H

#include <Arduino.h>

#define RED        "\033[31m"
#define GREEN      "\033[32m"
#define BLUE       "\033[34m"
#define YELLOW     "\033[33m"
#define CYAN       "\033[36m"
#define MAGENTA    "\033[35m"
#define BOLD       "\033[1m"
#define UNDERLINE  "\033[4m"
#define REVERSED   "\033[7m"
#define RESET      "\033[0m"

class Coloria {
public:
  Coloria();
  void printColoredText(const char* text, const char* color);
  void printFormattedText(const char* text, const char* format);
};

#endif // COLORIAEXAMPLE_H
