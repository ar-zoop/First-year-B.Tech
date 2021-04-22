#include <stdio.h>
int facto(int);
int main(){
	int num,a;
	printf("enter a number to get factorial of: ");
	scanf ("%d", &num);
	a=facto(num);
	printf("Factorial is= %d",a);
	return 0;
}

int facto(int x){
	int i,sum=1;
	for (i=1; i<=x;i++){
		sum=sum*i;
	}
	return sum;
}
