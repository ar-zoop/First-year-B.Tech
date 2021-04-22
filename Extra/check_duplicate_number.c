#include <stdio.h>
int main(){
	int n,i=0,r,len,j;
	printf("Enter a number to check if it has a duplicate digit: ");
	scanf("%d",&n);
	printf("Enter the length of the number: ");
	scanf("%d", &len);
	int arr[len];
	while(n>0){			
		r=n%10;
		arr[i]=r;
		n=n/10;		
		i++;
	}
	for (i=0; i<(len-1); i++){
		for (j=0; j<len;j++){
			if (arr[i]==arr[j] && i!=j)				
				printf("%d at pos %d is repeated at pos %d\n", arr[i], i, j);
		}
	}
	return 0;
}
