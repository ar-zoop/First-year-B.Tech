#include <stdio.h>
int main(){
	int a, *p;
	p=&a;
	scanf("%d",p);	
	printf("*p = %d\n",*p);
	printf("p = %d\n",p);
	printf("a = %d",a);
	
	return 0;
}
