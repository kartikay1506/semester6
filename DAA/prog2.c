//Program to find indexes i, j, k in an array of positive numbers such array[i] + array[j] = array[k]
#include<stdio.h>
int main() {
int n, i, j, k, c=0;
printf("Enter the size of the array\n");
scanf("%d", &n);
int arr[n];
printf("Enter the sorted array\n");
for(i=0;i<n;i++) {
scanf("%d", &arr[i]);
}
printf("The array is \n");
for(i=0;i<n;i++) {
printf("%d\t", arr[i]);
}
for(i=0;i<n-2;i++) {
for(j=i+1;j<n-1;j++) {
for(k=i+2; k<n;k++) {
if(arr[i] + arr[j] == arr[k]) {
printf("\nIndexes are %d %d %d", i,j,k);
}
}
}
}
}
