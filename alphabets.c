#include<stdio.h>
int main (){
char x;
printf("enter a character:");
scanf("%c", &x);

if (x=='a'|| x=='e'|| x=='o'|| x=='i' || x=='u'|| x=='A' || x=='E' || x=='I' || x=='O' || x=='U' ){
 printf("entered character is a vowel");
}else {
printf ("\n entered character is a consonant" );
}
return 0;
}
