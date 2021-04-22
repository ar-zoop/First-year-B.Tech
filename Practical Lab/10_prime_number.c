//WAP to check whether a given num is prime or not.
#include <stdio.h>
int main(){
	int num,i,flag=0;
	printf("Enter a number to check if its a prime nummber: ");
	scanf("%d",&num);
	for (i=2;i<=(num/2);i++){
		if (num%i==0){
			flag=-999;
			break;
		}
	}
	if (flag==0){
		printf("%d",num);
	}
	return 0;
}
