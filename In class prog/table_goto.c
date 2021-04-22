#include <stdio.h>
int main(){
	int x,y,z;
	printf("Enter a number for its table upto 10: ");
	scanf("%d", &x);
	z=1;
	begin:
		y=x*z;
		printf("%dx%d=%d\n",x,z,y);
		z=z+1;
		if (z<=10) goto begin;
	return 0;
}
