#include<stdio.h>

int findMax(int a[], int n) {
int max = a[0];
for(int i=1;i<n;i++) {
if(a[i] > max) {
max = a[i];
}
}
return max;
}

void CountSort(int a[], int b[], int c[], int n, int max) {
int i, j;
for(i=0;i<n;i++) {
c[a[i]] = c[a[i]] + 1;
}

for(i=1;i<=max;i++) {
c[i] = c[i] + c[i-1];
}

for(i=0;i<n;i++) {
j = c[a[i]];
b[j-1] = a[i];
c[a[i]] = c[a[i]] - 1;
}
}

int main() {
int i, n, max;
printf("Enter the number of elements in the array\n");
scanf("%d", &n);
int a[n], c[n];
printf("Enter the array elements\n");
for(i=0;i<n;i++) {
scanf("%d", &a[i]);
}
max = findMax(a, n);
int b[max+1];
for(i=0;i<=max;i++) {
c[i] = 0;
}

printf("\nOriginal Array\n");
for(i=0;i<n;i++) {
printf("%d  ", a[i]);
}

CountSort(a, b, c, n, max);

printf("\nSorted Array\n");
for(i=0;i<n;i++) {
printf("%d  ", b[i]);
}
printf("\n");
}
