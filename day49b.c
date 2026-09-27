#include <stdio.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    /* Find position of last word (surname) */
    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ' && name[i + 1] != ' ')
        {
            last = i + 1;
        }
    }

    /* Print initials */
    printf("%c. ", name[0]);

    for(i = 1; i < last; i++)
    {
        if(name[i - 1] == ' ' && name[i] != ' ')
        {
            printf("%c. ", name[i]);
        }
    }

    /* Print surname */
    for(i = last; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}
