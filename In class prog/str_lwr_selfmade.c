#include <stdio.h>
//#include <string.h>
int main(){
	char r[]="ArZoo";
	//char s[]="ARZOO",a;
	int i,d;
	
	for (i=0;r[i]!='\0';i++){
		if(r[i]<96){
			//printf("%c",r[i]+32);
			r[i]+=32;
		}
	}
	puts(r);
	
//		else{
//			printf("%c",r[i]);
//		}
//	}
//	strlwr(s);
	return 0;
}
