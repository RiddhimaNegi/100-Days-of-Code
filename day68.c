#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int actualSum = 0, expectedSum, missing;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        actualSum = actualSum + arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    missing = expectedSum - actualSum;

    printf("%d", missing);

    return 0;
}
