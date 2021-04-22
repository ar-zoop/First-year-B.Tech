//passing array into function
#include<stdio.h>
void show(int arr[], int);
int main(){
	int a[5]={1,2,3,4,5},n=5,i;
	show(a,n);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0; 
}
void show(int x[],int n){
	int i;
	for(i=0;i<n;i++){
	x[i]=x[i]+5;
	printf("%d ",x[i]);
	}
	printf("\n");
}
