#include<stdio.h>

int fibonacci(int n) {
if(n<=1)
return n;
else
return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
int i, n, a, b, sum;
printf("Enter the number of terms in the series\n");
scanf("%d", &n);
printf("Fibonacci Series till %d terms is :\n", n);
for(i=1;i<=n;i++) {
printf("%d  ", fibonacci(i));
}
printf("\n");
}
