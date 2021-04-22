#include <stdio.h>
int main(){
	char str[20],strcopy[20];
	int i;
	printf("Enter a string: ");
	gets(str);
	for (i=0;i<20;i++){
		strcopy[i]=str[i];
		if (str[i]=='\0')
			break;		
		
	}
	printf("%s" ,strcopy);
	return 0;
}
