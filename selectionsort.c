#include<stdio.h>

int main() {
int i, j, n, temp, comp = 0, swap = 0, min;
printf("Enter the number of elements \n");
scanf("%d", &n);
int a[n];
printf("Enter the array elements\n");
for(i=0;i<n;i++) {
scanf("%d", &a[i]);
}
printf("Original Arrray\t");
for(i=0;i<n;i++) {
printf("%d  ", a[i]);
}
printf("\n");
for(i=0;i<n-1;i++) {
min = i;
for(j=i+1;j<n;j++) {
comp++;
if(a[j] < a[min]) {
min = j;
}
}
temp = a[i];
a[i] = a[min];
a[min] = temp;
swap++;
}
printf("Sorted Arrray\t");
for(i=0;i<n;i++) {
printf("%d  ", a[i]);
}
printf("\nTotal Number of Comparisons %d", comp);
printf("\nTotal Number of Swaps %d\n", swap);
}
