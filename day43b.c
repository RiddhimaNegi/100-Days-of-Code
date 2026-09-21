#include <stdio.h>

int main()
{
    char str[100];
    int i, l = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    
    for(i = 0; str[i] != '\0'; i++)
    {
        l++;
    }
    for(i = 0; i < l / 2; i++)
    {
        if(str[i] != str[l - 1 - i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("String is a palindrome");
    }
    else
    {
        printf("String is not a palindrome");
    }

    return 0;
}
