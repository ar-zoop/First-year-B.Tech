#include <stdio.h>
int main(){
	int i,x,y;
	printf("Enter number or -1 to exit:");
		scanf("%d",&x);
		printf("Enter number or -1 to exit:");
		scanf("%d",&y);
		printf("%d\n",x+y);
	while (i!=-1){
		printf("Enter number or -1 to exit:");
		scanf("%d",&i);
		x=y;
		y=i;
		printf("%d\n",x+y);
		
	}
	
	return 0;
}
