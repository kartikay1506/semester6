#include<stdio.h>

void merge(int a[], int t[], int lb, int ub, int mid) {
int i, le = mid, k = lb;
while(lb<=le && (mid+1)<=ub) {
if(a[lb] < a[mid+1]) {
t[k] = a[lb];
k++;
lb++;
}
else {
t[k] = a[mid+1];
k++;
mid++;
}
}
while(lb<=le) {
t[k] = a[lb];
k++;
lb++;
}
while(mid+1 <= ub) {
t[k] = a[mid+1];
k++;
mid++;
}
for(i=0;i<k;i++) {
a[i] = t[i];
}
}

void mergesort(int a[], int t[], int lb, int ub) {
int mid;
if(lb<ub) {
mid = (lb+ub)/2;
mergesort(a, t, lb, mid);
mergesort(a, t, mid+1, ub);
merge(a, t, lb, ub, mid);
}
}

int main() {
int i, n;
printf("Enter the size of the array\n");
scanf("%d", &n);
int a[n], t[n];
printf("Enter the array elements\n");
for(i=0;i<n;i++) {
scanf("%d", &a[i]);
}
printf("\n\nArray is\n");
for(i=0;i<n;i++) {
printf("%d\t", a[i]);
}
printf("\n\nSorted Array is\n");
mergesort(a, t, 0, n-1);
for(i=0;i<n;i++) {
printf("%d\t", t[i]);
}
printf("\n");
}
