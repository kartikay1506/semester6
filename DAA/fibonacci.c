#include<stdio.h>

int main() {
int i, n, a, b, sum;
printf("Enter the number of terms in the series\n");
scanf("%d", &n);
printf("Fibonacci Series till %d terms is :\n", n);
a = 0;
b = 1;
printf("%d  ", b);
for(i=2;i<=n;i++) {
sum = a + b;
a = b;
b = sum;
printf("%d  ", sum);
}
printf("\n");
}
