#include <stdio.h>
int fib(int num);
int main(){
    int a, num,i;
    printf("Enter how long do you want the fib series to be: ");
    scanf("%d",&num);
    for (i=0;i<num;i++){
        printf("%d",fib(i));
    }
    return 0;
}
int fib(int num){
    if (num==0){
        return 0;
    }
    else if (num==1){
        return 1;
    }
    else {
        return fib(num-1)+fib(num-2);
    }
}