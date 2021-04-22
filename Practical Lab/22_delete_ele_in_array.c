#include <stdio.h>
#include <stdlib.h>
//int begin(int*p,int n);
//int end(int*p,int n);
int middle(int*p,int n);

int main(){
	int *p,n=5,i,choice=0;
	p=(int*)calloc(n,sizeof(int));
	for(i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", p+i);
    }
    while (choice!=4){
		printf("\nWhere do you want to delete a value: \n");
		printf("1)Beginning\n2) Ending\n3)Middle\n4)Exit\n");
		printf("Choose an option: "); 
		scanf("%d",&choice);
		switch(choice){
			case 1:
				begin(p,n);
				n--;
				break;
			case 2:
				ending(p,n);
				n--;
				break;
			case 3:
				middle (p,n);
				n--;
				break;
				
			case 4:
				break;
				
			default:
				printf("enter the right option! ")	;
		}
	}
	return 0;
}

int middle(int *p,int n){
	int mid,ele,i;
	p = (int*)realloc(p,n-1);
	n--;
	mid=n/2;
	for (i=mid;i<=n;i++){
		p[i]=p[i+1];
	}
	
	for (i=0;i<n;i++){
		printf("%d",*(p+i));
	}
}

int begin(int *p,int n){
	int ele,i;
	p = (int*) realloc(p,n-1);
	n--;
	for (i=0;i<=n;i++){
		p[i]=p[i+1];
	}
	for (i=0;i<n;i++){
		printf("%d",*(p+i));
	}
}

int ending(int *p,int n){
	int ele,i;
	p = (int*) realloc(p,n-1);
	n--;
	for (i=0;i<n;i++){
		printf("%d",*(p+i));
	}
	
}
