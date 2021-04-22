#include<string.h>
#include <stdio.h>
int main(){
	char arr[20];
	printf("Enter String: ");
	gets(arr);
		
	printf("%s	\n",strupr(arr));
	strlwr(arr);
	printf("%s	\n",arr);
	return 0; 
}
