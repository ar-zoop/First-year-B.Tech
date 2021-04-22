#include <stdio.h>
int main(){
	float x,y,z;
	printf("Enter a number: ");
	scanf("%f",&x);
	printf("Enter another number: ");
	scanf("%f",&y);
	printf("Enter another number: ");
	scanf("%f",&z);
	if (x>y && x>z){
		printf("%.2f is greater than %.2f and %.2f",x,y,z);
	}
	else if(y>x && y>z){
		printf("%.2f is greater than %.2f and %.2f",y,x,z);
	}
	else{
	
		printf("%.2f is greater than %.2f and %.2f",z,x,y);
}
	return 0;}
