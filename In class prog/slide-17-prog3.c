//array using pointer
#include <stdio.h>
int main(){
	int arr[5],*p, i;
	p=&arr[0];
	for (i=0;i<5;i++){
		printf("Enter a number for %d position: ",i);
		scanf ("%d",(p+i));
	}
	for (i=0;i<5;i++){
		
		printf("%d\n",(p+i));
	}
	printf("changing p\n");
	p=p+10	;
	for (i=0;i<5;i++){
		
		printf("%d\n",(p+i));
	}
	return 0;
}
