# Sonic the hedgehog Framework with HaxeFlixel

[![DISCORD SERVER](https://img.shields.io/discord/1151236517025546272?style=for-the-badge&logo=Discord&label=Discord
)](https://discord.gg/wb8aTkxPa3)

Welcome to the **Sonic the hedgehog Framework** project! This is a custom framework built using [HaxeFlixel](https://haxeflixel.com/) for recreating or modding the classic Sonic the Hedgehog game. This project is designed to help developers and enthusiasts create their own Sonic-inspired games or mods using the power and flexibility of HaxeFlixel.

## Features

- **Physics System**: Sonic-style platforming physics, including slopes, loops, and high-speed gameplay.
- **Level Editor Support**: Easily integrate custom levels.
- **Entity Management**: Built-in support for objects like rings, enemies, and springs.
- **Customizable**: Modular code for easy customization and extension.
- **Cross-Platform**: Compatible with Windows, macOS, Linux, and more.

## Installation
**Requirements**

Before getting started, ensure you have the following installed:

- [Haxe](https://haxe.org/download/) (version X.X.X or later)
- [Git](https://git-scm.com/downloads) (version X.X.X or later)
- A text editor or IDE, such as [VS Code](https://code.visualstudio.com/) or [IntelliJ IDEA](https://www.jetbrains.com/idea/)
- MSVC v142 - VS 2019 C++ x64/x86 build tools
- Windows SDK (10.0.17763.0)
- C++ Profiling tools
- C++ CMake tools for windows
- C++ ATL for v142 build tools (x86 & x64)
- C++ MFC for v142 build tools (x86 & x64)
- C++/CLI support for v142 build tools (14.21)
- C++ Modules for v142 build tools (x64/x86)
- Clang Compiler for Windows
- Windows 10 SDK (10.0.17134.0)
- Windows 10 SDK (10.0.16299.0)
- MSVC v141 - VS 2017 C++ x64/x86 build tools
- MSVC v140 - VS 2015 C++ build tools (v14.00)

**1. Clone the repository**:
   ```bash
   git clone https://github.com/exeller56/Sonic-template-Haxeflixel.git
   cd Sonic-template-Haxeflixel
   ```

**2. Install dependencies**:
   ```bash
   haxelib install flixel
   haxelib install openfl
   haxelib install flixel
   haxelib install flixel-addons
   haxelib run lime setup flixel
   haxelib run lime setup
   haxelib install flixel-tools
   haxelib run flixel-tools setup
   haxelib install hxcpp
   ```

**3. Build and run the project**:
   ```bash
   lime test <os>
   ```
   Replace `<os>` with your desired target platform (e.g., `windows`, `html5`).
## Authors

- [@exeller56](https://www.github.com/exeller56)
- [@detiven](https://www.github.com/detiven)


## License

This project is licensed under the MIT License. See the `LICENSE` file for details.


## Acknowledgements

- [HaxeFlixel](https://haxeflixel.com/) for providing an amazing game development framework.
- SEGA for the inspiration and original Sonic the Hedgehog game.
