#include<stdio.h>
int main()
{
int n, d, i , arr[10]={0};
int max=0, most=0;
printf("enter a number");
scanf("%d", &n);
while(n>0)
{
d= n % 10;
arr[d]++;
n=n/10;
}
for (i=0; i< 10; i++)
{
if(arr[i]>max)
{
max=arr[i];
most=i;
}
}
printf("Most occuring digit is %d \n", most);
printf("\n It occurs %d times", max);
return 0;
}
