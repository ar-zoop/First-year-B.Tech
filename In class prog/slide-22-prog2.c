#include <stdio.h>
#include<string.h>
typedef struct student{
	int rnum;
	char name[30];
}std;
int main(){
	std s;
	printf("Enter roll no and name of student");
	scanf("%d",&s.rnum);
	gets(s.name);
	printf("\nRoll Number = %d",s.rnum);
	printf("%s",s.name);
	return 0;
}
