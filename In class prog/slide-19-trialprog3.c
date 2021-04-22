#include <stdio.h>
int add(int,int);
int main(){
	int num1,num2,ans;
	printf("Enter 2 nos: ");
	scanf("%d%d", &num1, &num2);
	ans=add(num1,num2);
	printf("Addition is %d", ans);
	return 0;
}
int add (int x, int y){
	int res;
	res=x+y;
	
}
