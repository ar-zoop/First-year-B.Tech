#include <stdio.h>
#include <string.h>
struct student{
	int rnum;
	char name[30];
};

int main(){
	struct student s={101,"AKshay Kumar"};
	printf("\nRoll number= %d",s.rnum);
	printf("\nname=%s", s.name);
	return 0;
}
