#include<stdio.h>
int main()
{
int arr1[100], arr2[100], arr3[200];
int x,y,i;
printf("Enter number of elements in first array");
scanf("%d", &x);
printf("\n Enter %d elements", x);
for(i = 0; i < x; i++)
{
scanf("%d", &arr1[i]);
}
printf("\n Enter the number of elements in second array: ");
scanf("%d", &y);
printf("\n Enter %d elements", y);
for(i = 0; i < y; i++)
{
scanf("%d", &arr2[i]);
}
for(i = 0; i < x; i++)
{
arr3[i]=arr1[i];
}
for(i = 0; i < y; i++) 
{
arr3[i + x ]=arr2[i];
}
printf("Merged array:");
for(i=0; i< x + y; i++)
{
printf("%d", arr3[i]);
}
printf("\n");
return 0;
}

