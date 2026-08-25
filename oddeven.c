#include<stdio.h>
int main ()
{
int x;
printf("enter integer");
scanf("%d", &x);
if(x % 2 == 0)
{
printf("the integer is even");
}
else
{
printf("The integer is odd");
}
return 0;
}
