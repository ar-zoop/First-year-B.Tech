#include <stdio.h>
int main(){
	int a=10, *p;
	p=&a;
	printf("%d\n",*p);
	*p=*p+10;
	printf("%d\n",*p);
	*(&a)=a+*p;
	printf("%d",a);
	
	return 0;
}
