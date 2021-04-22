#include <stdio.h>
int main(){
	int c, blank, tab, nl;
	blank=0,tab=0,nl=0;
	while ((c=getchar()) != EOF){
		if (c==' ')
			blank++;
		else if(c=='\n')
			nl++;
		else if(c='\t')
			tab++;
	}
	printf("end of file");
	printf("blank=%d\nnewline=%d\ntab=%d\n",blank,nl,tab);
	

	
}
