#include<stdio.h>
void show();
int x=10;
int main(){
int a=5;
printf("%d ",a);
printf("%d ",x);
x=20;
show();
return 0; }
void show(){
int b=10;
x=x+10;
printf("%d ",b);
printf("%d ",x );
}
