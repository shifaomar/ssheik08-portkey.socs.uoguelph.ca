#include "../include/sheikhShifaA2.h"

// task1
char *readFile(char *filename)
{
    char *buffer = NULL;
    int length;
    FILE *f = fopen(filename, "r");

    if (f)
    {
        fseek(f, 0, SEEK_END);
        length = ftell(f);
        fseek(f, 0, SEEK_SET);
        buffer = (char *)malloc(length + 1);
        if (buffer)
        {
            fread(buffer, 1, length, f);
            buffer[length] = '\0';
        }
        fclose(f);
    }

    return buffer;
}
