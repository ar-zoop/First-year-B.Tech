#include <stdio.h>
void swap(int* a, int* b);
int main(){
	int n1,n2;
	printf("Enter 2 numbers to swap: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	swap(&n1,&n2);
		
	return 0;
}
void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("a=%d and b=%d", *a,*b);
	
}
