#include <stdio.h>
int main(){
	int inp,i,y,z,res;
	y=0;
	z=1;
	printf("Enter how many times you want to repeat the loop for fibonacci series: ");
	scanf("%d", &inp);
	printf("%d\n%d\n",y,z);
	i=1;
	while(i<=inp){
		res=y+z;
		printf("%d\n",res);
		y=z;
		z=res;
		i++;
	}

return 0;	
}
