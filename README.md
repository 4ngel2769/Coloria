<div align="center">
    <img src="coloria.png" width=512>
    <h1>🎨 Coloria</h1>
    <!-- Badges -->
    <div>
        <img src="https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white" alt="Arduino" />
        <img src="https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
    </div>
    <h3>Support development ❤️</h3>
    <div>
        <img src="https://img.shields.io/badge/Ko--fi-F16061?style=for-the-badge&logo=ko-fi&logoColor=white" alt="Ko-Fi" href="https://ko-fi.com/angeldev0" />
    </div>
</div>

---

Welcome to **Coloria** – the playful and powerful Arduino library for adding colors and formatting to your serial output and logs. Whether you're debugging or just want to add some flair to your projects, Coloria makes it easy!

## 🌟 Features

- **ANSI Color and Formatting Support**:
  - Foreground/Background Colors: Black, Red, Green, Yellow, Blue, Magenta, Cyan, White
  - Bright Foreground/Background Colors: Bright Black, Bright Red, Bright Green, Bright Yellow, Bright Blue, Bright Magenta, Bright Cyan, Bright White
- **Text Formatting**: `Bold, Dim, Italic, Underline, Blink, Reverse, Hidden, Strikethrough`
- **HEX Color Code Support**: Convert HEX color codes to ANSI escape sequences for custom colors.
- **Text Alignment**: Left, Center, Right
- **Preset Combinations**: _Check documentation for the list of presets._

## 🚀 Getting Started

### Installation

1. **Download the Library**:
   - [Download Coloria v1.0.0](https://github.com/4ngel2769/Coloria/archive/v1.0.0.zip)

2. **Add the Library to Arduino IDE**:
   - Open Arduino IDE.
   - Go to `Sketch` > `Include Library` > `Add .ZIP Library...`.
   - Select the downloaded ZIP file.

### Example Usage

Here's a quick example to get you started:

```cpp
#include <Arduino.h> // Include the Arduino library
#include <Coloria.h> // Include the Coloria library

void setup() {
    Serial.begin(115200);
    while (!Serial) {
        // Wait for Serial to be ready
    }
    
    Coloria::println(Coloria::GREEN, Coloria::BOLD, "System setup complete.");
    Coloria::println(Coloria::YELLOW, "This is a normal yellow text.");
    Coloria::println(Coloria::RED, Coloria::UNDERLINE, "This is an underlined red text.");
    Coloria::printlnHex("FF5733", "This is a text with HEX color #FF5733.");
    Coloria::printlnHex("00FF00", "This text has a green background.", true);
    Coloria::printlnAligned(Coloria::BLUE, "This text is centered.", "center", 40);
}

void loop() {
    // Your loop implementation
}
```
The library features an example sketch available from the examples menu: `Examples > Coloria > ColoriaSerialPrint`


## 🎨 Color and Formatting Options

### Foreground Colors

```cpp
Coloria::println(Coloria::RED, "This is red text.");
Coloria::println(Coloria::GREEN, "This is green text.");
Coloria::println(Coloria::BLUE, "This is blue text.");
```

### Bright Foreground Colors

```cpp
Coloria::println(Coloria::BRIGHT_RED, "This is bright red text.");
Coloria::println(Coloria::BRIGHT_GREEN, "This is bright green text.");
Coloria::println(Coloria::BRIGHT_BLUE, "This is bright blue text.");
```

### Background Colors

```cpp
Coloria::println(Coloria::RED, "This text has a red background.", true);
Coloria::printlnHex("FFFFFF", "This text has a white background.", true);
```

### HEX Color Codes

```cpp
Coloria::printlnHex("FF5733", "This is text with HEX color #FF5733.");
Coloria::printlnHex("00FF00", "This text has a green background.", true);
// "true" indicates that the HEX code should be applied to the background.
```

### Text Formatting

```cpp
Coloria::println(Coloria::BOLD, "This is bold text.");
Coloria::println(Coloria::UNDERLINE, "This is underlined text.");
Coloria::println(Coloria::ITALIC, "This is italic text.");
// note: Not all terminals support italic.
```

### Text Alignment

```cpp
Coloria::printlnAligned(Coloria::BLUE, "This text is centered.", "center", 40);
Coloria::printlnAligned(Coloria::RED, "This text is right-aligned.", "right", 40);
Coloria::printlnAligned(Coloria::GREEN, "This text is left-aligned.", "left", 40);
```

## 🤝 Contributing

We welcome contributions! Feel free to open issues or pull requests to help make Coloria even better.

1. Fork the repository.
2. Create a new branch: `git checkout -b my-new-feature`.
3. Make your changes and commit them: `git commit -m 'Fancy new feature'`.
4. Push to the branch: `git push origin my-new-feature`.
5. Submit a pull request.

## 📄 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## 📞 Contact

Have questions or feedback? Reach out to us:

- GitHub: [https://github.com/4ngel2769/Coloria](https://github.com/4ngel2769/Coloria)
- Email: [4ngel2769](mailto:angeldevz0@proton.me)

---

Thank you for using Coloria! We hope it brings color and joy to your Arduino projects. Happy coding! 😊

## ❤️ Donations
Help us keep Coloria thriving by making a donation! Your support ensures continuous improvement and sustainability of the project.

[![support development](https://img.shields.io/badge/Ko--fi-F16061?style=for-the-badge&logo=ko-fi&logoColor=white)](https://ko-fi.com/angeldev0)