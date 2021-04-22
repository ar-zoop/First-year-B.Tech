#include <stdio.h>
int main(){
	int a=10, *p;
	p=&a;
	printf("%d",*p);
	*p=*p+10;
	*(&a)=a+*p;
	if (a==*p)
		printf("hello");
	printf("%d",a);
	
	return 0;
}
