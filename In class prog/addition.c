#include <stdio.h>
int main(){
	float x,y,z;
	printf("Enter a number to add: ");
	scanf("%f", &x);
	printf("Enter another number: ");
	scanf("%f", &y);
	z=x+y;
	printf("%.2f + %.2f =%.2f",x,y, z);
	return 0;
	
}

