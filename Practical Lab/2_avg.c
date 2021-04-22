#include <stdio.h>
int main(){
	float num1, num2;
	float avg;
	printf("Enter 2 nos: ");
	scanf("%f %f",&num1, &num2);
	avg=(num1+num2)/2;
	printf("%0.2f", avg);
	return 0;
}
