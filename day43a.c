#include <stdio.h>

int main()
{
    char str[100];
    int i, l = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n')
        {
            l++;
        }
    }

    printf("Reversed string: ");

    for(i = l - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
