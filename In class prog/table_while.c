#include<stdio.h>
int main(){
	int res,i,inp;
	printf("Enter a number to get its table: ");
	scanf("%d",&inp);
	i=1;
	while (i<=10){
		printf("%dx%d=%d\n",inp,i,inp*i);
		i++;
	}
	return 0;
}
