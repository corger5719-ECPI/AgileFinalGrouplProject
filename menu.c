#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

/*
    menu()
    Clears the screen, displays menu options,
    and returns the selected option as an integer.
*/
int menu(void)
{
    int choice;

    system("cls");  // Clear screen (Windows / Dev-C++)

    printf("=================================\n");
    printf("        MAIN MENU\n");
    printf("=================================\n");
    printf("1. Option One\n");
    printf("2. Option Two\n");
    printf("3. Write to File\n");
    printf("4. Exit\n");
    printf("=================================\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    return choice;
}
