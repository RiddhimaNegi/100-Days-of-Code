#include <stdio.h>
int main (){
int x;
 printf("Enter an integer: ");
 scanf("%d", &x);

 if (x >= 0){
  if (x ==0){
   printf("The number is zero.");
  } else {
    printf("\n The number is positive");
  }
}else {
 printf("\n The number is negative. ");
}
return 0;
}
