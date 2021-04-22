//call by reference
#include<stdio.h>
void swap(int *, int *);
int main(){
	int a, b;
	printf("Enter 2 Numbers: ");
	scanf("%d%d",&a, &b);
	swap(&a, &b);
	printf("After swapping a= %d and b= %d\n", a, b);
	return 0; }
void  swap(int *x, int *y){
	int z=*x;
	*x=*y;
	*y=z;
	printf("After swapping a= %d and b= %d", *x, *y);
}
