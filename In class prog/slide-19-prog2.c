//no return with argument
#include <stdio.h>
//prototyping
void add(int,int);

int main(){
	int num1, num2;
	printf("Enter 2 nos: ");
	scanf("%d%d", &num1, &num2);
	add(num1,num2);
	return 0;
}

void add(int x, int y){
	int res=x+y;
	printf("Addition is %d",res);
}
