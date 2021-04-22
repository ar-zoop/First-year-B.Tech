#include<string.h>
#include<stdio.h>
int main(){
char arr[20],arr1[20];
printf("Enter String1: ");
gets(arr);
strcpy(arr1,arr);
printf("%s\n",arr1);
return 0;
}
