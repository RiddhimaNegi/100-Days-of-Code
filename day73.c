#include <stdio.h>

int main()
{
    FILE *fp;
    int ch, last = '\0';
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0;

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
        {
            lines++;
        }

        if(ch == ' ' || ch == '\n')
        {
            inWord = 0;
        }
        else if(inWord == 0)
        {
            words++;
            inWord = 1;
        }

        last = ch;
    }

    if(characters > 0 && last != '\n')
    {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d Words: %d Lines: %d",
           characters, words, lines);

    return 0;
}
