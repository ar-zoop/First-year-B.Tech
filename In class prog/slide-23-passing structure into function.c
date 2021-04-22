#include <stdio.h>
typedef struct employee{
	int num;
	char name[20];
	float id;
}emp;

int passing(emp x);

int main(){
	emp b={12, "arzoo", 1.2};
	passing(b);
	return 0;
}

int passing(emp x){
	puts(x.name);
	return 0;
}
