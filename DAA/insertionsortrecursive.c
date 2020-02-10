#include<stdio.h>

void insertionsort(int a[], int n) {
int key, j;
if(n==0) {
return;
}
else {
insertionsort(a, n-1);
key = a[n];
j = n-1;
while(j>=0 && a[j]>key) {
a[j+1] = a[j];
j--;
}
a[j+1] = key;
}
} 

int main() {
int i, n, key;
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
insertionsort(a, n-1);
printf("Sorted Array is\n");
for(i=0;i<n;i++) {
printf("%d  ", a[i]);
}
printf("\n");
}
