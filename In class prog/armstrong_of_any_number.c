
//armstrong
#include <stdio.h>
int main(){
	int i, n,rem,sum=0,temp,count, dig_sum=1,safe;
	printf("Enter a number: ");
	scanf("%d",&n)	;
	temp=safe=n;
	while (n!=0){
		rem=n%10;
		count++;
		n=n/10;
	}
	while (temp!=0){
		rem=temp%10;
		for (i=0;i<count;i++){
			dig_sum=dig_sum*rem;
		}
		sum+=dig_sum;
		temp=temp/10;
		dig_sum=1;
	}
	if(sum==safe)
		printf("yes");
	else
		printf("no");
	

return 0;
}

