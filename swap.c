#include<stdio.h>
int main (){
int a,b,c;
printf("input two numbers");
scanf("%d %d", &a,&b);

c=a;
a=b;
b=c;

printf("\n after swapping: a=%d, b%d", a, b);
return 0;
}
