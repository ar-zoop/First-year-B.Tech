#include <stdio.h>
int main(){
	int r, l, b, choice;
	float area;
	printf("enter the option number you want the area of:-\nrectangle\nsquare\ncircle\n");
	scanf("%d",&choice);
	switch (choice){
		case 1:
			printf("Enter the length: ");
			scanf("%d",&l);
			printf("Enter the breadth: ");
			scanf("%d",&b);
			area=l*b;
			printf("area is %d", area);
			break;
		case 2:
			printf("Enter the side: ");
			scanf("%d",&l);
			area=l*l;
			printf("area is %d", area);
			break;			
		case 3:
			printf("Enter the radius: ");
			scanf("%d", &r);
			area=3.14*r*r;
			printf("area is %.2f", area);
			break;
	}
	return 0;
}
