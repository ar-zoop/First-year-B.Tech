#include <stdio.h>
int main(){
	int c1,c2;
	while(0==0){
		c1=getchar();
		if (c1==' '){
			while ((c2=getchar())==' '){
				;
			}
			putchar(' ');
			putchar(c2);
			
		}
		else
			putchar(c1);
	}
	return 0;
}
