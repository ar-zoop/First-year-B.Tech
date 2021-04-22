#include <stdio.h>
int main(){
	int x;
	printf("Enter a number to see its corresponding weekday(1-7): ");
	scanf("%d",&x);

	switch (x){
		case 1:
			printf("The day is Monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
		printf("Enter a correct number");		
	
	
	return 0;
}
