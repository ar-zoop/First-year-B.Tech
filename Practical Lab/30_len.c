#include <stdio.h>
int main(){
	char str[20];
	int count=0,i;
	printf("Enter a string: ");
	gets(str);
	for (i=0;i<20;i++){
		if (str[i]=='\0')
			break;
		else
			count++;
	}
	printf("%d", count);
	return 0;
}
