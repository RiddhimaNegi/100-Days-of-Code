#include<stdio.h>
int main()
{
int r, c, i, j, arr[10][10];

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
printf("the matrix is: \n");
for(i=0; i<r; i++)
{
for(j=0;j<c;j++)
{
printf("%d", arr[i][j]);
}
printf("\n");
}
return 0;
}

