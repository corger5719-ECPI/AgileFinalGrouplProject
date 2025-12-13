#include <stdio.h>
#include "optionSelector.h"
#include "writeFile.h"
#include "readFile.h"

/*
 * Function: mainLoop
 * Purpose: Calls appropriate functions based on the user's menu choice
 */
void mainLoop(int option)
{
    switch (option)
    {
        case 1:
            writeFile();
            break;

        case 2:
            readFile();
            break;

        case 3:
            printf("Calculation 1 executed.\n");
            break;

        case 4:
            printf("Calculation 2 executed.\n");
            break;

        default:
            printf("Invalid option selected.\n");
    }

    // Pause so the user can read output before returning to menu
    printf("\nPress Enter to continue...");
    getchar(); // clear buffer
    getchar(); // wait for Enter
}
