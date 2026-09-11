#include<stdio.h>
int main()
{
int arr[100], n, i , num, pos;
printf("Enter number of elements");
scanf("%d", &n);
printf(" \n Enter elements in sorted order");
for(i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}
printf("\n Enter number to insert");
scanf("%d", &num);
pos=0;
while(pos<n && arr[pos]<num)
{
pos++;
}
for(i=n; i> pos; i--)
{
arr[i]=arr[i-1];
}
arr[pos]=num;
n++;
printf("\n Array after insertion");
for(i=0; i < n; i++)
{
printf("%d", arr[i]);
}
printf("\n");
return 0;
}
