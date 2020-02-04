#include<stdio.h>

void towerofhanoi(int n, char source, char destination, char middle) {
if(n==1) {
printf("Move the disk 1 from %c to %c\n", source, destination);
}
else {
towerofhanoi(n-1, source, middle, destination);
printf("Move the disk %d from %c to %c\n", n, source, destination);
towerofhanoi(n-1, middle, destination, source);
}
}

int main() {
int n;
printf("Enter the number of disks\n");
scanf("%d", &n);
printf("\n");
towerofhanoi(n, 'A', 'B', 'C');
}
