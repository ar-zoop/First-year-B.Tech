//armstrong number
#include <stdio.h>
int main(){
	int num,a,sum=0,temp,c=0,temp2,i,res=1;
	printf("Enter a number : ");
	scanf ("%d",&num);
	temp=num;
	temp2=num;
	while (temp2!=0){
		temp2=temp2/10;
		c++;

	}
	printf("%d\n",c);
	while (num>0){
		a=num%10;
		num=num/10;
		for (c;c>0;c--){
			res=res*a;
		}
		printf("%d\n\n\n",res);
		
	}
	if (sum==temp){
		printf("Yes this is armstrong.");
	}
	else {
		printf("no");
	}
	return 0;
}
