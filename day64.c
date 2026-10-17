#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k;
    int len, maxLen = 0;
    int repeat;

    printf("Enter string: ");
    scanf("%s", s);

    len = strlen(s);

    for(i = 0; i < len; i++)
    {
        for(j = i; j < len; j++)
        {
            repeat = 0;

            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if(repeat == 1)
            {
                break;
            }

            if(j - i + 1 > maxLen)
            {
                maxLen = j - i + 1;
            }
        }
    }

    printf("%d", maxLen);

    return 0;
}
