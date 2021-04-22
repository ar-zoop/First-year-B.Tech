#include <stdio.h>
int main(){
	float x,y,z;
	printf("enter a number: ");
	scanf("%f", &x);
	printf("enter another number: ");
	scanf("%f", &y);
	printf("enter another number: ");
	scanf("%f", &z);
	if (x>y){
		if (x>z){
			printf ("%.2f is the greatest number", x);
		}	
		else{
			printf("%.2f is the greatest number",z);
		}
	}
	else if (y>x){
		if (y>z){
		printf("%.2f is the greatest number",y);
		}
		else{
			printf("%.2f is the greatest number",z);
		}
	}
	return 0;
}
