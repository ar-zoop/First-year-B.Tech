#include <stdio.h>
int main(){
	int x,y,w,op;
	int f;
	printf("enter a number: ");
	scanf("%d", &x);
	printf("enter an operator from \n+\n-\n*\n/\n%%\n");
	scanf("%d", &op);
	printf("enter another number: ");
	scanf("%d", &y);
	
	switch (op){
		case 1 :
			w=x+y;
			printf("%d ",w);
			break;
		case 2:
			w=x-y;
			printf("%d",w);
			break;
		case 3:
			w=x*y;
			printf("%d",w);
			break;
		case 4:		
			f=x/y;
			printf("%d",f);
			break;
	
		case 5:
			w=x%y;
			printf("%d",w);
			break;
		
		default:
			printf("wrong operator!");
	}
	return 0;
}
	
