#include <stdio.h>
int begin(int*p,int n);
int end(int*p,int n);
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
		printf("\nWhere do you want to add another value: \n");
		printf("1)Beginning\n2) Ending\n3)Middle\n4)Exit\n");
		printf("Choose an option: "); 
		scanf("%d",&choice);
		switch(choice){
			case 1:
				begin(p,n);
				n++;
				break;
			case 2:
				ending(p,n);
				n++;
				break;
			case 3:
				middle (p,n);
				n++;
				break;
				
			case 4:
				break;
				
			default:
				printf("enter the right option! ")	;
		}
	}
	return 0;
}

int begin(int *p,int n){
	int ele,i;
	p = (int*) realloc(p,n+1 );
	n++;
	for (i=n-1;i>0;i--){
		p[i]=p[i-1];
	}
	printf("Enter the number : ");
	scanf("%d",&ele);
	p[0]=ele;
	
	for (i=0;i<n;i++){
		printf("%d",*(p+i));
	}	
}

int ending(int *p,int n){	
	int ele,i;
	p = (int*) realloc(p,n+1 );
	n++;
	
	printf("Enter the number : ");
	scanf("%d",&ele);
	p[n-1]=ele;
	
	for (i=0;i<n;i++){
		printf("%d",*(p+i));
	}
}

int middle(int*p,int n){
	int ele,i;
	p = (int*) realloc(p,n+1 );
	n++;
	for (i=n-1;i>=(n/2);i--){
		p[i]=p[i-1];
	}
	printf("Enter the number : ");
	scanf("%d",&ele);
	p[(n/2)-1]=ele;
	
	for (i=0;i<n;i++){
		printf("%d",*(p+i));
	}	
}



