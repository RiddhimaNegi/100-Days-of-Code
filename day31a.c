#include<stdio.h>
int main()
{
int arr[10], n, key, i, found=0;
printf("enter number of elements:");
scanf("%d" ,&n);
printf("\n enter %d elements", n);
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
printf("\n enter the element to search:");
scanf("%d", &key);
for(i=0; i<n; i++)
{
if(arr[i]==key)
{
printf("element found at index %d and position %d \n",i, i+1);
found=1;
break;
   }
}
if(found==0)
{
printf("\n element not found in the array");
}
return 0;
}
