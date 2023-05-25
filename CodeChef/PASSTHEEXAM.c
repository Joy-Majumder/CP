#include <stdio.h>

int main () {
	int A,B,C;
	int T;
	scanf("%d",&T);
	while (T--) {
		scanf("%d %d %d",&A,&B,&C);
		if ((A+B+C>=100) && A>=10 && B>=10 && C>=10) {
			printf("PASS\n");
		} else {
			printf("Fail\n");
		}
	}
	return 0;
}
