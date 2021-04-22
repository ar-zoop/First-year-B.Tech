#include <stdio.h>
#include <string.h>

typedef struct student{
	int rnum;
	char name[30];
}std;
int main(){
	std s[3];
	int i;
	for (i=0;i<3;i++){
		printf("Enter roll number and name of student: ");
		scanf("%d", &s[i].rnum);
		gets(s[i].name);
	}
	for(i=0;i<3;i++){
		printf("\nRoll Number = %d",s.rnum);
		printf("\nName = %s",s.name);
}
}
	
	return 0;
}
