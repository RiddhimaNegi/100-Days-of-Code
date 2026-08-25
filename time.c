#include<stdio.h>
int main(){
int s,h,rem,m,t;
printf("input time in seconds");
scanf("%d", &s);
h=s/3600;
rem=s%3600;
m=rem/60;
s=rem%60;
printf("time in format is %d:%d:%d", h,m,s);
return 0;
}
