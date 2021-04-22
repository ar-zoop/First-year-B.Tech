#include <stdio.h>
int main(){
	char r[]="ArzOo";
	int i,d;
	
	for (i=0;i<5;i++){
		if(r[i]>96){
			r[i]=r[i]-32;
		}
	}
	puts(r);
	return 0;
}
