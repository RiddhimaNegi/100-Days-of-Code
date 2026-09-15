#include<stdio.h>
int main()
{
int arr[100][100], trans[100][100];
int r,c,i,j;
printf("Enter the number of rows and columns");
scanf("%d %d" ,&r, &c);
printf("Enter elements of the matrix");
for(i=0;i<r; i++)
{
for(j=0; j<c; j++)
{
scanf("%d", &arr[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0; j<c; j++)
{
trans[j][i]=arr[i][j];
}
}
printf("Transpose of matrix");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d", trans[i][j]);
}
printf("\n");
}
return 0;
}
