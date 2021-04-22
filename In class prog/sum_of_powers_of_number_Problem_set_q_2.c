//sum of powers of numbers
#include <stdio.h>
int main(){
	int n,i,j,sum=0,exp=1;
	printf("enter a number: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for (j=0;j<4;j++){
			exp=exp*i;
			
		}
		
		sum+=exp;
	}
	printf("%d",sum);
	return 0;
}
