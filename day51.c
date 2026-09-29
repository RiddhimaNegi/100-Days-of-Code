#include <stdio.h>

int main()
{
    int nums[100];
    int n, target, i;
    int f = -1, l = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(f == -1)
            {
                f = i;
            }

            l= i;
        }
    }

    printf("%d, %d", f, l);

    return 0;
}
