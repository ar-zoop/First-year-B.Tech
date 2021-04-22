#include <stdio.h>
int main(){
	int arr[10]={1,2,3,4,5};
	int pos,num,i;
	printf("Where do you want to enter the number: ");
	scanf("%d", &pos);
	printf("What number to enter: ");
	scanf("%d", &num);
	for (i=9; i>=(pos-1);i--){
		arr[i]=arr[i-1];
	}
	arr[pos-1]=num;
	
	for (i=0; i<10;i++)
		printf("%d",arr[i]);
	return 0;
}
