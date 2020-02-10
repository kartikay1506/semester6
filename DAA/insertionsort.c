#include<stdio.h>

int main() {
int i, j, n, key;
printf("Enter the value of n\n");
scanf("%d", &n);
int a[n];
printf("Enter the array elements\n");
for(i=0;i<n;i++) {
scanf("%d", &a[i]);
}
printf("Array is\n");
for(i=0;i<n;i++) {
printf("%d  ", a[i]);
}
printf("\n");
for(i=1;i<n;i++) {
key = a[i];
j = i-1;
while(j>=0 && a[j]>key) {
a[j+1] = a[j];
j--;
}
a[j+1] = key;
}
printf("Sorted Array is\n");
for(i=0;i<n;i++) {
printf("%d  ", a[i]);
}
printf("\n");
}
