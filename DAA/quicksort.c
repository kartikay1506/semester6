#include<stdio.h>

int partition(int a[], int p, int r) {
int i=0, j=p+1, key, temp;
key = a[r];
while(j<=r) {
if(a[j]<key) {
i++;
temp = a[i+1];
a[i+1] = a[j];
a[j] = temp;

}
j++;
}
temp = a[i];
a[i] = a[p];
a[p] = temp;
return i;
}

void quicksort(int a[], int p, int r) {
int q;
if(p<=r) {
q = partition(a, p, r);
quicksort(a, p, q-1);
quicksort(a, q+1, r);
}
}

int main() {
int n, i;
printf("Enter the size of the array\n");
scanf("%d", &n);
int a[n];
printf("Enter the array elememts\n");
for(i=0;i<n;i++) {
scanf("%d", &a[i]);
}
printf("\nArray is\n");
for(i=0;i<n;i++) {
printf("%d  ", a[i]);
}
printf("\nSorted Array is\n");
quicksort(a, 0, n);
for(i=0;i<n;i++) {
printf("%d  ", a[i]);
}
}
