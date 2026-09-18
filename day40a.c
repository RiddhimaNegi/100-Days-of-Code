
#include<stdio.h>
int main()
{
int r,c,i,j,k,arr[100][100];
printf("Enter number of rows and columns of matrix");
scanf("%d %d", &r, &c);
printf("Enter matrix elements:\n");
for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
scanf("%d", &arr[i][j]);
}
}
printf("Diagonal traversal:\n");
for(k = 0; k < r + c - 1; k++)
{
for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
if(i + j == k)
{
printf("%d ", arr[i][j]);
}
}
}
printf("\n");
}
return 0;
}
