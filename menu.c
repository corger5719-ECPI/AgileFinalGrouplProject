#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

/*
 * Function: menu
 * Purpose: Clears the screen, displays menu options,
 *          and retrieves user input
 * Returns: Integer representing selected menu option
 */
int menu(void)
{
    int choice;

    // Clear the screen for a clean menu display
    // Use "cls" for Windows, "clear" for Linux/macOS
    system("clear");

    printf("===== MAIN MENU =====\n");
    printf("1. Write to file\n");
    printf("2. Read from file\n");
    printf("3. Calculation 1\n");
    printf("4. Calculation 2\n");
    printf("5. Exit\n");
    printf("Select an option: ");

    scanf("%d", &choice);

    return choice;
}
