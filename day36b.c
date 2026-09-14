#include<stdio.h>
int main()
{
int r, c, i, j, arr[10][10], sum=0;

printf("Enter number of rows and colomns");
scanf("%d %d", &r, &c);
printf("enter elements of the matrix");
for(i=0; i<r; i++)
{
for(j=0; j<c; j++)
{
scanf("%d", &arr[i][j]);
}
}
for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
sum = sum + arr[i][j];
}
}
printf("Sum of all elements = %d", sum);
return 0;
}
