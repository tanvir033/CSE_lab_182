#include <stdio.h>
int main() {
int n, rev = 0, remainder;
printf("Enter ");
scanf("%d", &n);
while (n != 0) {
remainder = n % 10;
rev = rev * 10 + remainder;
n /= 10;
}
printf("Reversed  = %d", rev);
return 0;
}