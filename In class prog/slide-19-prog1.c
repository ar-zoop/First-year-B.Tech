#include <stdio.h>
//prototyping
void addition();

int main(){
	printf("\nBefore function call");
	addition();
	printf("\nAfter function call");
	return 0;
}

//Definition
void addition(){
	int a,b,c;
	printf("\nEnter 2 nos:");
	scanf("%d%d", &a,&b);
	c=a+b;
	printf("\nAddition equlas to %d",c);
}
