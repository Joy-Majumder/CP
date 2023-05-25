#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	long long A,B;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lli %lli",&A,&B);
		if (A<B)
	  		printf("<\n");
	   	else if(B<A)
	  		printf(">\n");
	 	else
	  		printf("=\n");
	} 
	return 0;
}