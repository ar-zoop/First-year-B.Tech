#include <stdio.h>

enum week{
	Mon, Tue, Wed, Thurs, Fri, Sat, Sun
};
int main(){
	enum week w;
	w=Wed;
//	puts(w);
	printf("%d",w);
	
}
