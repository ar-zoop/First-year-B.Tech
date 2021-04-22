#include <stdio.h>
int main(){
	int temp,base, exp, i, res;
	printf("Enter a base number: ");
	scanf("%d",&base);
	temp=base;
	printf("Enter an exponent number: ");
	scanf("%d",&exp);
	for (i=0;i<exp;i++){
		res=res*base;
	}
	printf("%d",res);
	return 0;
}
