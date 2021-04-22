#include <stdio.h>
int main(){
	int arr[20]={1,2,3,4,5}, arr1[20]={1,2,3,4,5},arr2[20],i;
	for (i=0;i<5;i++){
		arr2[i]=arr[i]+arr1[i];
		printf("%d\n",arr2[i]);
	}
		
	return 0;
}
