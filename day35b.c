#include<stdio.h>
int main()
{
int arr[100],n,i, j, k, x;
printf("enter number of elements");
scanf("%d", &n);
printf("enter %d elements", n);
for(i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}
printf("enter the position to rotate the array to");
scanf("%d", &k);
k= k%n;
for(j=0; j<n; j++)
{
x=arr[n-1];
}
for(j=0;j<k;j++)
{
x=arr[n-1];
for(i=n-1;i>0;i--)
{
arr[i]=arr[i-1];
}
arr[0]=x;
}
printf("Array after right rotation \n");
for(i=0; i<n; i++)
{
printf("%d", arr[i]);
}
return 0;
}
