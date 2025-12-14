#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "main.h"

/*
    main()
    Program entry point.
    Continuously displays the menu and
    processes user selections until exit.
*/
int main(void)
{
    int option = 0;

    do
    {
        option = menu();
        mainLoop(option);

    } while (option != 4);

    return 0;
}
