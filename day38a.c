#include<stdio.h>
int main(){
int a[100][100], b[100][100], sum[100][100];
int r, c, i ,j;
printf("Enter number of rows and columns in both  matrices ");
scanf("%d %d", &r, &c);
printf("Enter elements of the first array");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d", &a[i][j]);
}
}

printf("Enter elements of the second array");

for(i=0;i<r;i++) 
{
for(j=0;j<c;j++)
{
scanf("%d", &b[i][j]);
sum[i][j]= a[i][j] + b[i][j];
}
}
printf("Sum the the matrices is:");
for(i=0; i<r;i++)
{
for(j=0; j<c; j++)
{
printf("%d", sum[i][j]);
}
printf("\n");
}
return 0;
}
