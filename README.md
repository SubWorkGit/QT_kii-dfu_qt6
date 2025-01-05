# QT Kii-DFU Qt6

## Project Overview
This project demonstrates upgrading the Kii-DFU (https://github.com/kiibohd/kii-dfu) application from Qt5 to Qt6, showcasing the process of adapting legacy Qt5 code to be compatible with the latest Qt6 framework while retaining the original functionality.

**Device Firmware Update (DFU)** is a USB-based protocol that allows firmware updates directly to a microcontroller (MCU) without the need for external programming tools. This project utilizes DFU functionality to facilitate seamless firmware updates for compatible devices using a user-friendly interface built with Qt6.

## Features
- Firmware update functionality for devices.
- User-friendly graphical interface using Qt6.
- Improved compatibility with modern Qt6 APIs and tools.

## Installation and Usage

### Prerequisites
- Qt 6.7 or later (configured with your compiler of choice, e.g., MinGW or MSVC).
- CMake 3.21 or later.
- A compatible compiler (e.g., MinGW-w64 or Microsoft Visual Studio).

### Build Instructions
1. Clone the repository:
   ```bash
   git clone https://github.com/SubWorkGit/QT_kii-dfu_qt6.git
   cd QT_kii-dfu_qt6
   ```
2. Open the project in Qt Creator:
   - Launch Qt Creator.
   - Click on **File > Open File or Project**.
   - Navigate to the cloned repository and select the `CMakeLists.txt` file.
   - Configure the project using your desired kit (e.g., Desktop Qt 6.7.2 MinGW 64-bit).

3. Build the project:
   - Click on the Build button (hammer icon) in Qt Creator.

4. Run the application:
   - Click on the Run button (green arrow) in Qt Creator.

## Technical Details

### Dependencies
- **Qt6**: Core, Gui, Widgets modules are used for the GUI and core functionality.
- **CMake**: Used as the build system.

### Upgrade Highlights
- Updated the project from Qt5 to Qt6.
- Replaced deprecated APIs with their modern equivalents in Qt6.
- Ensured compatibility with Qt6 tools and CMake configuration.

## License
This project follows the same license as the original repository. For details, see the LICENSE file in the original repository.

## Acknowledgments
Special thanks to the kiibohd team for the original Kii-DFU (https://github.com/kiibohd/kii-dfu) project.
