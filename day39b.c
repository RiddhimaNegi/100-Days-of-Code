#include <stdio.h>

int main()
{
    int arr[100][100];
    int n, i, j, sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");

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
            if(i == j)
            {
                sum = sum + arr[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}
