#include <stdio.h>
int main(){
	int i,n,j;
	printf("enter no of rows: ");
	scanf("%d",&n);
	for (i=0;i<=n/2;i++){		
		for (j=0; j<n/2-i;j++){
			printf(" ");
		}
		for (j=0; j<(2*i)+1;j++){
			printf("*");
		}
		for (j=0; j<n/2-i;j++){
			printf(" ");
		}
			
			printf("\n");
		}
		
			return 0;
	}


