#include<stdio.h>
typedef struct student{
int rnum;
char name[30];
}std;
int main(){
std s[3]; //Array of Structure
int i;
//Input in array of structure
for(i=0;i<3;i++){
printf("Enter roll number and name of student");
scanf("%d",&s[i].rnum);
gets(s[i].name);
}
//Output from an array of structure
for(i=0;i<3;i++){
printf("\n--------------------------\n");
printf("\nRoll Number = %d",s.rnum);
printf("\nName = %s",s.name);
}
}
