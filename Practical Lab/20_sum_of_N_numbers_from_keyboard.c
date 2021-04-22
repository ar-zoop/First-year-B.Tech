#include <stdio.h>
int main(){
	int n,i,sum=0,inp;
	printf("How many numbers do you want to input from keyboard: ");
	scanf("%d",&n);
	printf("Enter your numbers: ");
	for (i=0;i<n;i++){
		printf("%d",i);
		scanf("%d\n",&inp);
		sum+=inp;
	}
	printf("%d",sum);
	
	return 0;
}
