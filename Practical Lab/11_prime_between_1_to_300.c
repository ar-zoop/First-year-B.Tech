#include <stdio.h>
int prime(int num);
int main(){
	int i,a;
	for (i=2;i<301;i++){
		a=prime(i);
		if (a!=0)
			printf("%d\n",a);
	}
	return 0;
}
int prime(int num){
	int i, flag=0;
	for (i=2;i<=(num/2);i++){
		if (num%i==0){
			flag=-999;
			break;
		}
	}
	if (flag==0){
		return num;
	}
	flag=0;
}
