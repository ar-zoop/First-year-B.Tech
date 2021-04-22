#include <stdio.h>
int main(){
//	//input from user
//	
//	char name[100];
//	printf("Enter your name: ");
//	scanf("%s",&name);
//	printf("Hello %s",name);
//	
	
	
	char name[100];
	printf("Enter your name: ");
	gets(name);
	printf("hello");
	puts(name);
	return 0;
}
