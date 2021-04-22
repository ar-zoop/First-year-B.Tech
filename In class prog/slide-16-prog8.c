#include<string.h>
#include <stdio.h>
int main(){
	char arr[20],arr1[20];
	int diff;
	printf("Enter arr: ");
	gets(arr);
	printf("Enter arr1: ");
	gets(arr1);
	diff=stricmp(arr,arr1);
printf("%d",diff);

return 0;
}
