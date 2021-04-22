#include <stdio.h>
int main(){
	int a=10;
	float b=2.4;
	char c='a';
	void *p; 
	p=&a; 
	printf("%d\n",*(int*)p); 
	p=&b;
	printf("%d",sizeof((float*)p));

	return 0;
}
