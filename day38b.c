#include<stdio.h>
int main()
{
int r, c ,arr[100][100], i, j;
printf("Enter number of rows and columns in the matrix");
scanf("%d %d", &r, &c);
printf("Enter elements of the matrix");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d", &arr[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(arr[i][j]!=arr[j][i])
{
printf("array is asymmetric");
break;
}
else
{
printf("array is symmetric");
break;
}
}
}
return 0;
}
