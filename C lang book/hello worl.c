#include <stdio.h>
main(){
	/*ghikayhud
	*/
	float fahr, cel;
	int lower, upper, step;
	lower=0;
	upper=300;
	step=20;
	cel=lower;
	
	while (cel<=upper){
		fahr=(cel*9.0/5.0)+32.0;
		printf("%3.0f \t %6.1f \n",cel,fahr);
		cel+=step;
	}
}
