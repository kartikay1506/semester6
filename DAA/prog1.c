//Program to find the number of occurrences of a key in a sorted array of n elements
#include<stdio.h>
int main() {
int n;
printf("Enter the size of the array\n");
scanf("%d", &n);
int arr[n], i, j, key, c=0;
printf("Enter the sorted array\n");
for(i=0;i<n;i++) {
scanf("%d", &arr[i]);
printf("\n");
}
printf("The array is \n");
for(i=0;i<n;i++) {
printf("%d\t", arr[i]);
}

printf("\nEnter the key element\n");
scanf("%d", &key);

for(i=0;i<n;i++) {
if(arr[i]==key) {
c++;
}
}
printf("%d occurs %d times\n", key, c);
}
