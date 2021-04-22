#include<stdio.h>
int main ()
{
    int ans=1 , num;
    printf("enter factorial value: ");
    scanf("%d",&num);
    while(num>=1)
    {

        
        ans=ans*num;
        num--;

    }
    printf("\nans = %d",ans);
    return 0;
}

