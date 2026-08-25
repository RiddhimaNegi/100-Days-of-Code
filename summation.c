#include<stdio.h>
int main(){
int n,x;
printf("input n to find sum of first n natural numbers");
scanf("%d" , &n);
x=n*(n+1)/2;
printf("\n sum of first %d numbers is: %d",n, x);
return 0;
}

