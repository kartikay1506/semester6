//Program to find indexes i, j, k in an array of positive numbers such array[i] + array[j] = array[k] having complexity n2 log n
#include<stdio.h>
int main() {
int n, i, j, k, m, c=0, mid, sum;
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
printf("\nThe indexes are\n");
for(i=0;i<n-2;i++) {
for(j=i+1;j<n-1;j++) {
sum = (arr[i]+arr[j]);
m = n;
for(k=0;k<m;k++) {
mid = (int)((m-i)/2);
if(sum == arr[mid]) {
printf("%d %d %d\n", i, j, k);
}
else if(sum > arr[mid]) {
i = mid;
}
else {
m = mid;
}
}
}
}
}


