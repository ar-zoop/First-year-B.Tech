#include <stdio.h>
int main(){
	int n,r,sum=0,temp;
	printf("Enter a number to check if it is palindrome: ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0){	
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
		

	}
	
	if (sum==temp){
		printf("yes palindrome");
	}
	else{
		printf("Not palindrome");
	}
	return 0;
}
