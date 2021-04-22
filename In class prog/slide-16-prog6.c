#include<string.h>
#include <stdio.h>
int main(){
	char arr[20],arr1[20];
	printf("Enter String1: ");
	gets(arr);
	printf("Enter String-2: ");
	gets(arr1);
	strcat(arr,arr1);
	printf("%s\n",arr);
return 0;
}
