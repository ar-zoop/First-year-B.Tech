#include<stdio.h>
int main(){
	int i,j;
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			if(i==j){
				printf("1");
			}
			else if(i==(j+1)){
				printf("1");
			}
			else if(i==j-1){
				printf("1");
			}
			else{
				printf("0");
			}		
		}
		printf("\n");
	}
	return 0;
}
