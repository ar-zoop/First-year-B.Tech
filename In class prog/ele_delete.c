#include <stdio.h>
int main(){
	int loc=3,n=5,arr[10]={1,2,3,4,5},i;
	for (i=loc; i<n;i++){
		arr[i-1]=arr[i];
	}
	n--;
	
	for (i=0; i<n;i++){
		printf("%d",arr[i]);
	}
	
	return 0;
}

