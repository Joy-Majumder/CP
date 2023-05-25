#include <stdio.h>

int main () {

	int Y;
	scanf("%d", &Y);
	
	(Y%400!=0 && Y%4 == 0) ? 
		printf("Yes") :
	   		printf("No");	
	
	return 0;
}

