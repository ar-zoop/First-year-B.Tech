#include <stdio.h>
int main(){
	int arr[2][2],i,j;
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<2;j++){
			arr=arr[i][j];
		}
	}
	return 0;
}
