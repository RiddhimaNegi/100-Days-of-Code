#include <stdio.h>

int main() {
  int d, f;
 printf("Enter number of late days: ");
    scanf("%d", &d);

   if (d <= 0) {
      printf("No fine\n");
    } else if (d <= 5) {
        f = d * 2;
        printf("Fine = Rs. %d", f);
 } else if (d <= 10) {
        f = (5 * 2) + (d - 5) * 4;
   printf("Fine = Rs. %d", f);
    } else if (d <= 30) {
        f = (5 * 2) + (5 * 4) + (d - 10) * 6;
        printf("Fine = Rs. %d", f);
    } else {
        printf("Membership Cancelled\n");
    }
 return 0;
}
