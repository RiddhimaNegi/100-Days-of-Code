#include<stdio.h>
int main(){
float celsius,fahrenheit;
printf("input temperature in celsius");
scanf("%f", &celsius);
fahrenheit = (celsius * 9 / 5) + 32;
 printf("\n Temperature in Fahrenheit = %f", fahrenheit);
return 0;
}
