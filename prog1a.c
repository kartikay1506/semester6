//Program to find the number of occurrences of a key in a sorted array of n elements with a time complexity of log n
#include<stdio.h>
int main() {
int n;
printf("Enter the size of the array\n");
scanf("%d", &n);
int arr[n], i, j, k, key, c, mid;
printf("Enter the sorted array\n");
for(i=0;i<n;i++) {
scanf("%d", &arr[i]);
}
printf("The array is \n");
for(i=0;i<n;i++) {
printf("%d\t", arr[i]);
}

printf("\nEnter the key element\n");
scanf("%d", &key);
mid = (int)(n/2);
for(i=0;i<=mid;i++) {
if(arr[mid]==key && arr[mid-1]!=key) {
j=i;
break;
}
else {
mid = mid - 1;
}
}
mid = (int)(n/2);
for(i=mid;i<n;i++) {
if(arr[mid]==key && arr[mid+1]!=key) {
k=i;
break;
}
else {
mid = mid + 1;
}
}
c = (k-j)+1;
printf("%d occurs %d times\n", key, c);
}
