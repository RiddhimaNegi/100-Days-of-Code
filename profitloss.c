#include<stdio.h>
int main(){
float c,s,a,p;
printf("Enter cost price: ");
  scanf("%f", &c);

    printf("Enter selling price: ");
    scanf("%f", &s);
  if (s > c) {
        a = s - c;
        p = (a/ c) * 100;
  printf("Profit percentage is %f", p);
}else if (c > s){
 a= c - s;
 p= (a/c) * 100;
printf("\n Loss percentage is %f", p);
} else {
printf("No profit no loss");
}
return 0;
}
