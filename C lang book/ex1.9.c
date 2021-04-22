#include <stdio.h>

	
int main(){
	int c,b;
	char a=' ';
	while ((c=getchar())!=EOF){
		if (c==' '){
			printf("%d",c);
			b=getchar();
			while (b==' '){
				b=getchar();
			}
			printf("%d",b);
			c=getchar();
		}
			printf("%d",c);
			c=getchar();
	}
	
	return 0;
}
