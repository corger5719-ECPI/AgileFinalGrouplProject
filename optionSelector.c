#include <stdio.h>
#include <stdlib.h>
#include "optionSelector.h"

void mainLoop(int option)
{
    switch (option)
    {
        case 1:
            printf("Option One selected.\n");
            break;

        case 2:
            printf("Option Two selected.\n");
            break;

        case 3:
            printf("Writing to file...\n");
            break;

        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid selection.\n");
    }

    system("pause");
}
