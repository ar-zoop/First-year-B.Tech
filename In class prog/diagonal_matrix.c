#include <stdio.h>
int main(){
	int i,j;
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			if (i==j){
				printf("%d",1);
			}
			else{
				printf("%d",0);
			}
			
		}
		printf("\n");
	}
	return 0;
}
