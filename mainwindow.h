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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// ----- Includes -----

// Qt headers
#include <QFile>        // File operations
#include <QProcess>     // External process handling
#include <QMainWindow>  // Base class for main application windows

// ----- Namespaces -----

namespace Ui {
    class MainWindow;   // UI class generated from the .ui file
}

// ----- Classes -----

class MainWindow : public QMainWindow
{
    Q_OBJECT // Enables Qt's meta-object system for signals and slots

public:
    // Constructor and destructor
    explicit MainWindow(QWidget *parent = nullptr); // Use nullptr instead of 0 for modern C++ compliance
    ~MainWindow();

private slots:
    // Slots for UI actions and process handling
    void browseFiles();                      // Opens a file browser to select a binary file
    void dfuFlashBinary();                   // Executes the flashing process
    void dfuListDevices();                   // Lists connected DFU devices
    void dfuCommandStatus();                 // Checks the status of the DFU command
    void dfuCommandComplete(int exitCode);   // Handles the completion of the DFU command

private:
    // Utility function to verify the existence of dfu-util
    bool checkDFU(QFile *dfuUtil);

    // UI pointer
    Ui::MainWindow *ui;

    // DFU utility process and binary path
    QProcess dfuUtilProcess;
    QString binaryPath;
};

#endif // MAINWINDOW_H


