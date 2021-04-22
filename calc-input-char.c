#include <stdio.h>
int main(){
	int x,y,w;
	char op;
	printf("enter a number: ");
	scanf("%d", &x);
	printf("enter an operator from \n+\n-\n*\n/\n//\n%\n");
	scanf(" %c", &op);
	printf("enter another number: ");
	scanf("%d", &y);
	
	switch (op){
		case '+' :
			w=x+y;
			printf("%d",w);
			break;
		case '-':
			w=x-y;
			printf("%d",w);
			break;
		case '*':
			w=x*y;
			printf("%d",w);
			break;
		case '/':
			w=x/y;
			printf("%d",w);
			break;

		case '%':
			w=x%y;
			printf("%d",w);
			break;
		
		default:
			printf("wrong operator!");
	}
	return 0;
}
	
