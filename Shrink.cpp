#include <stdio.h>

int main()
{
    FILE* Source = fopen("Fortress.cpp", "r");
    FILE* Destination = fopen("Fortress.txt", "w");

    char C = ' ';
    while (!feof(Source))
    {
        fscanf(Source, "%c", &C);
        if (C == '"') C = 'X';
        else if (C == '\n')
        {
            fprintf(Destination, "\\n");
            continue;
        }
        fprintf(Destination, "%c", C);
    }

    fclose(Source);
    fclose(Destination);
    return 0;
}