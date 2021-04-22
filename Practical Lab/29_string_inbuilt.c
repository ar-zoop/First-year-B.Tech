#include <stdio.h>
#include <string.h>
int main(){
	char str[20],str2[20];	int d;
	printf("Enter your name: ");
	gets(str);
	printf("1) String length:- %d", strlen(str));
	strcpy(str2,str);
	printf("\n2) Copying string:- %s",str2);
	printf("\n3) String concatenation:- %s",strcat(str,str2));
	printf("\nEnter a string: ");
	gets(str2);
	d=strcmp(str,str2);
	if (d==0){
		printf("4) String comparision:- Same strings");
	}
	else{
		printf("4) String comparision:- Different strings");
	}
	printf("\n5) String reverse:- %s",strrev(str));
	return 0;
}

