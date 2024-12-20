###| kii-dfu CMake Build System |###
#
# Jacob Alexander 2014
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
###

cmake_minimum_required(VERSION 3.16)

# Define the target name
set(TARGET kii-dfu)
project(${TARGET})

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable automatic MOC, RCC, and UIC processing for Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Find the required Qt6 components
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Define the list of source files
set(SRCS
    main.cpp
    mainwindow.cpp
    mainwindow.ui # The .ui file must be listed here
)

# Create the executable target
add_executable(${TARGET} ${SRCS})

# Link the Qt6 libraries to the target
target_link_libraries(${TARGET} Qt6::Widgets)

# Optional: Add linker flags for Windows
if(WIN32)
    set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")
endif()


