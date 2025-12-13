#include <stdio.h>
#include "writeFile.h"

/*
 * Function: writeFile
 * Purpose: Opens a file, writes data, and closes the file
 */
void writeFile(void)
{
    FILE *fp = fopen("data.txt", "w");

    // Check if file opened successfully
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(fp, "This data was written to the file.\n");

    fclose(fp);

    printf("Data successfully written to file.\n");
}
