#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, *p,n;
	printf("Enter num of elements: ");
	scanf("%d", &n);
	p=(int*) calloc(n,sizeof(int));
	printf("Enter %d values\n",n);
	for (i=0;i<n;i++){
		scanf("%d", (p+i));
	
	}
	
	for (i=0;i<n;i++){
		printf("%d", *(p+i));
	}
	
return 0;
}
