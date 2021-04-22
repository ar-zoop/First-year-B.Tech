#include <stdio.h>
int main(){
	char str[20], str2[20];
	int i,n,n2;
	printf("Enter a string: ");
	gets(str);
	printf("Enter another string: ");
	gets(str2);
	n=strlen(str);
	n2 = strlen(str2);
	for (i=0;i<n2;i++){
		str[n+i]=str2[i];
	}
		
	printf("%s", str);
	return 0;
}
