#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int total = 0, leftSum = 0, rightSum;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }

    for(i = 0; i < n; i++)
    {
        rightSum = total - leftSum - arr[i];

        if(leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + arr[i];
    }

    printf("Pivot index = %d", pivot);

    return 0;
}
