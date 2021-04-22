#include <stdio.h>
int main(){
	int num,i;
	printf("enter max number of stars you want in a row: ");
	scanf("%d",&num);
	for (i=1;i<num+1;i++){
		printf("*");
	}
	printf("\n");
	num=num-1;
	while (num!=1){
		printf("*");
		for (i=2;i<=num-1;i++){
			printf(" ");
		}
		printf("*");
		printf("\n");
		
		num--;
		
	}
	printf("*");
	return 0;
}
