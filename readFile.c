#include <stdio.h>
#include "readFile.h"

/*
 * Function: readFile
 * Purpose: Reads contents of a file and displays them to the screen
 */
void readFile(void)
{
    FILE *fp = fopen("data.txt", "r");
    char buffer[100];

    // Check if file opened successfully
    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }

    // Read file line by line
    while (fgets(buffer, sizeof(buffer), fp))
    {
        printf("%s", buffer);
    }

    fclose(fp);
}
