#include <stdio.h>

int main(void) {
	// your code goes here
	int N;
	scanf("%d",&N);
	if (N%5==0 || N%6==0) {
	    printf("YES");
	} else {
	    printf("NO");
	}
	return 0;
}

