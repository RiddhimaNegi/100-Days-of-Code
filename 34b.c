include<srdio.h>
int main()
{
int arr[100],n, i, pos;
printf("enter number of elements");
scanf("%d", &n);
printf("enter %d elements", n);
for(i=0; i < n; i++)
{
scanf("%d", &arr[i]);
}
printf("enter position of element to delete");
scanf("%d", &pos);
for(i=pos-1;i<n-1;i++)
{
arr[i]=arr[i+1];
}
n--;
printf("Array after deletion \n");
for(i=0; i<n; i++);
{
printf("%d", arr[i]);
}
return 0;
}
