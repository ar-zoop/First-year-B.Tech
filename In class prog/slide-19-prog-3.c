#include <stdio.h>
void add();
int main(){
	int ans;
	ans=add();
	printf("Addition is %d",ans);
return 0;
}
void add (void){
	int num1,num2,res;
	printf("Enter 2 Numbers: ");
	scanf("%d%d",&num1, &num2);
	res=num1+num2;
	return res;
}
