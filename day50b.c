#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k, n = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    /* Find length */
    for(i = 0; str[i] != '\0'; i++)
    {
        n++;
    }

    /* Print all substrings */
    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            for(k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}

