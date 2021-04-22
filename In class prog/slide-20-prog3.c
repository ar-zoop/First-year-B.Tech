//passing array into function
#include<stdio.h>
void show(int[], int);
int main(){
	int a[5]={1,2,3,4,5},n=5;
	show(a,n);
	return 0; 
}
void show(int x[],int n){
	int i;
	for(i=0;i<n;i++)
	printf("%d ",x[i]);
}
