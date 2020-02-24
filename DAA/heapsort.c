#include<stdio.h>

void heapify(int a[], int n, int i) {
int temp;
int largest = i;
int l = (2*i+1);
int  r = (2*i+2);
if(a[l] > a[largest] && l < n) {
largest = l;
}
if(a[r] > a[largest] && r < n) {
largest = r;
}
if(largest != i) {
temp = a[i];
a[i] = a[largest];
a[largest] = temp;
heapify(a, n, largest);
}
}

void build_heap(int a[], int n) {
for(int i = n/2-1; i>=0; i--) {
heapify(a, n, i);
}
}

void HeapSort(int a[], int n) {
int temp;
build_heap(a, n);
for(int i=n-1; i>=0; i--) {
temp = a[0];
a[0] = a[i];
a[i] = temp;
heapify(a, i, 0);
}
}


int main() {
int i, n;
printf("Enter the number of elements in the array\n");
scanf("%d", &n);
int a[n];
printf("Enter the array elements\n");
for(i=0;i<n;i++) {
scanf("%d", &a[i]);
}

printf("\nOriginal Array is\n");
for(i=0;i<n;i++) {
printf("%d  ", a[i]);
}

HeapSort(a, n);

printf("\nSorted Array is\n");
for(i=0;i<n;i++) {
printf("%d  ", a[i]);
}
printf("\n");
}
