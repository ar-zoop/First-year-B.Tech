#include <stdio.h>
int main(){
	float x,y;
	printf ("enter an number to compare: ");
	scanf("%f", &x);
	printf("Enter another number: ");
	scanf("%f", &y);
	if (x>y){
		printf("%.2f is greater than %.2f", x,y);
	}
	else{
		printf("%.2f is greater than %.2f",y,x);
	}
	return 0;
	
}
