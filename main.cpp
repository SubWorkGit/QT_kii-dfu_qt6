/* Copyright (C) 2014 by Jacob Alexander
 *
 * This file is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mainwindow.h" // Header file for the main window class
#include <QApplication> // Qt's application management class

int main(int argc, char *argv[])
{
    // Create a QApplication instance
    // This manages application-wide resources and event handling
    QApplication a(argc, argv);

    // Create an instance of MainWindow (defined in mainwindow.h/.cpp)
    MainWindow w;

    // Display the main window
    w.show();

    // Execute the application event loop
    // This keeps the application running until it is explicitly closed
    return a.exec();
}

