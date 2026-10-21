#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int freq[1000] = {0};

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(freq[arr[i]] == 1)
        {
            printf("Repeated element is %d", arr[i]);
            return 0;
        }

        freq[arr[i]]++;
    }

    return 0;
}
