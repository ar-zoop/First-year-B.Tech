#include<stdio.h>
int main(){
	int arr[20][20] , transpose[20][20],i,j,c,r;
	printf("Enter the rows and columns: ");
	scanf("%d%d",&c,&r);
	
	for (i=0;i<c;i++){
		for (j=0;j<r;j++){
			printf("Enter number: ");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<c;i++){
		for (j=0;j<r;j++){
			
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (j=0;j<r;j++){
		for (i=0;i<c;i++){		
			transpose[j][i]=arr[i][j];
			printf("%d",transpose[j][i]);
		}
		printf("\n");
	}
	return 0;
}


