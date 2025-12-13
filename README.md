# Menu-Driven C Application

## Overview
This project is a **menu-driven console application written in C**.  
It demonstrates **modular programming**, where each major feature is separated
into its own source (`.c`) and header (`.h`) file.

The application allows users to select options from a menu, perform actions
such as reading from and writing to a file, and continue running until an
exit option is selected.

This project was designed to follow common **software engineering best practices**
and introductory **C programming standards**.

---

## Features
- Text-based menu system
- Modular design using header files
- File input and output
- Continuous program loop until exit
- Compiles into a single executable

---

## Project File Structure

MenuDrivenApp/
│
├── main.c // Entry point and main program loop
├── menu.c // Displays menu and gets user input
├── optionSelector.c // Routes menu choices to functions
├── writeFile.c // Writes data to a file
├── readFile.c // Reads data from a file
│
├── menu.h // Function prototypes for menu
├── optionSelector.h // Function prototypes for option selector
├── writeFile.h // Function prototypes for file writing
├── readFile.h // Function prototypes for file reading
│
└── README.md // Project documentation

yaml
Copy code

---

## How the Application Works
1. The program starts execution in `main.c`.
2. The `menu()` function displays options to the user and returns a selection.
3. The `mainLoop()` function uses the selected option to call the appropriate feature.
4. The program continues looping until the user selects the exit option.
5. The program exits cleanly and returns `0`.

---

## How to Compile and Run the Application

This application uses the **GNU Compiler Collection (GCC)**.  
Make sure GCC is installed before compiling.

### Linux / macOS
1. Open a terminal.
2. Navigate to the project directory.
3. Compile all source files into a single executable:

```bash
gcc main.c menu.c optionSelector.c writeFile.c readFile.c -o menuApp
Run the application:

bash
Copy code
./menuApp
Windows (MinGW or similar GCC environment)
Open Command Prompt or PowerShell.

Navigate to the project directory.

Compile all source files into a single executable:

bash
Copy code
gcc main.c menu.c optionSelector.c writeFile.c readFile.c -o menuApp.exe
Run the application:

bash
Copy code
menuApp.exe
Troubleshooting
gcc: command not found
Cause: GCC is not installed or not added to your system PATH.
Fix:

Linux: sudo apt install gcc

macOS: Install Xcode Command Line Tools

Windows: Install MinGW or MSYS2 and ensure GCC is added to PATH

undefined reference to function
Cause: One or more .c files were not included in the compile command.
Fix:
Ensure all source files are listed in the gcc command.

Screen does not clear correctly
Cause: system("clear") works on Linux/macOS but not Windows.
Fix:
Replace system("clear") with:

c
Copy code
system("cls");
when compiling on Windows.

File not found when reading
Cause: The file has not been created yet.
Fix:
Run the Write to File option before attempting to read the file.

Notes for Students
This is a console-based C application, not a web application.

No HTML, CSS, or JavaScript is required.

Header files are used to support modular design.

Each function performs a single, well-defined task.
