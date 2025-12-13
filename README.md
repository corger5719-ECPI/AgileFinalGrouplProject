# AgileFinalGroupProject - TEAM 1
# Menu-Driven C Application

## Overview
This project is a menu-driven C application developed using modular programming techniques. 
Each feature is separated into its own source and header file to improve organization, 
readability, and maintainability.

## Features
- Menu-driven user interface
- File read and write operations
- Modular design using header files
- Continuous program loop until exit is selected

## File Structure
- main.c – Program entry point and control loop
- menu.c / menu.h – Displays menu and captures user selection
- optionSelector.c / optionSelector.h – Routes menu options to functions
- writeFile.c / writeFile.h – Writes data to a file
- readFile.c / readFile.h – Reads data from a file

## How to Compile

### Linux / macOS
```bash
gcc main.c menu.c optionSelector.c writeFile.c readFile.c -o menuApp
./menuApp

### Windows
''' bash
gcc main.c menu.c optionSelector.c writeFile.c readFile.c -o menuApp.exe
menuApp.exe
