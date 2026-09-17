#include <stdio.h>

int main()
{
    int arr[100][100];
    int n, i, j;
    int flag = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is asymmetric");
    }

    return 0;
}


