
#include<stdio.h>
int main()
{
int arr[100], n, i, x;
printf("enter number of elements");
scanf("%d", &n);
printf("\n enter %d elements", n);
for (i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
for(i=0;i<n/2;i++)
{
x= arr[i];
arr[i]=arr[n-1-i];
arr[n-1-i]=x;
}
printf("Reversed array: \n");
for(i=0;i<n;i++)
{
printf("%d", arr[i]);
}
printf("\n");
return 0;
}
