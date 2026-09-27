#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, flag;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    /* Find lengths */
    for(i = 0; str1[i] != '\0'; i++)
        len1++;

    for(i = 0; str2[i] != '\0'; i++)
        len2++;

    if(len1 != len2)
    {
        printf("Strings are not rotations");
        return 0;
    }

    /* Try every possible rotation */
    for(i = 0; i < len1; i++)
    {
        flag = 1;

        for(j = 0; j < len1; j++)
        {
            if(str1[(i + j) % len1] != str2[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            printf("Strings are rotations");
            return 0;
        }
    }

    printf("Strings are not rotations");

    return 0;
}
