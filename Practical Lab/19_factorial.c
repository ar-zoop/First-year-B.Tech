#include <stdio.h>
int fact(int a);
int main(){
	int res, num;
	printf("Enter the number you want the factorial of :  ");
	scanf("%d",&num);
	res=fact(num);
	printf("%d",res);
	return 0;
}

int fact(int a){
	if (a==0){
		return 1;
	}
	else if(a==1){
		return 1;
	}
	else{
		return a*fact(a-1);
	}
	
}
