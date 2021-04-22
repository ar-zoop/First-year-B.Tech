//Return without argument
#include <stdio.h>
int add();

int main(){
	int ans;
	ans=add();
	printf("Addition is %d", ans);
	return 0;
}

int add(){
	int num1, num2, res;
	printf("Enter 2 nos: ");
	scanf("%d%d", &num1, &num2);
	res=num1+num2;
	return res;
}
