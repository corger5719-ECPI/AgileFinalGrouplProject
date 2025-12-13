#include <stdio.h>
#include "menu.h"
#include "optionSelector.h"

/*
 * Function: main
 * Purpose: Entry point of the application
 * Returns: 0 upon successful execution
 */
int main(void)
{
    int option;

    // Loop until user selects Exit option
    do
    {
        option = menu();

        if (option != 5)
        {
            mainLoop(option);
        }

    } while (option != 5);

    printf("Program exited successfully.\n");
    return 0;
}
