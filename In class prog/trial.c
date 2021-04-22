#include <stdio.h>
int add(int,int);

int main(){
	int a;
	int x,y,ans;	
	printf("enter nos: ");
	scanf ("%d%d",&x,&y);
	a=add(x,y);
	printf ("%d",a);
	return 0;
}

int add(int x,int y){
	int ans;
	ans=x+y;
//	printf("%d",ans);
return ans;	
}
