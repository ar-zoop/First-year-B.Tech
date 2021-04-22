#include <stdio.h>
int main(){
	int i, sum=0,num;
	printf("Enter number of elements to be added into array: ");
	scanf("%d",&num);
	int arr[num];
	for (i=0;i<num;i++){
		printf("Enter the element for array at pos %d: ", i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	
	printf("The sum of all elements of the array is= %d ",sum);
	
	return 0;
}

