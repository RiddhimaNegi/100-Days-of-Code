#include<stdio.h>
int main()
{
int arr[100],n,i,l,s,x;
printf ("enter the number of elements");
scanf("%d", &n);
printf("entner %d elements", n);
for(i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}
l=arr[0];
s=arr[0];
for(i=1; i<n; i++)
{
if(arr[i]> l)
{
l=arr[i];
}
}
for(i=0; i<n ; i++)
{
if(arr[i] !=l)
{
s=arr[i];
break;
}
}
for(i=0;i<n;i++)
{
if(arr[i]>s && arr[i]< l)
{
s=arr[i];
}
}
printf("second largest element is %d", s);
return 0;
}
