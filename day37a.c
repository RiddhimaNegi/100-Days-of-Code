#include<stdio.h>
int main()
{
int arr[100][100], sum[100];
int r,c,i,j;
printf("Enter number of rows and columns");
scanf("%d  %d", &r, &c);
printf("\n enter elements of the matrix");
for(i=0; i<r; i++)
{
for(j=0;j<c;j++)
{
scanf("%d", &arr[i][j]);
}
}
for(i=0;i<r;i++)
{
sum[i]=0;
for(j=0;j<c;j++)
{
sum[i]=sum[i]+arr[i][j];
}
}
printf("Sum of each row\n");
for(i=0;i<r;i++)
{
printf("row %d = %d\n", i + 1, sum[i]);
}
return 0;
}
