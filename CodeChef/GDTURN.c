#include<stdio.h>

int main(void) {
    	int i;
	scanf("%d",&i);
	while (i--) {
	    int a,b;
	    scanf("%d\n",&a);
	    scanf("%d\n",&b);
	    if (a+b>6) {
	        printf("YES\n");
	    } else {
	        printf("NO\n");
	    }
	    
	}
    return 0;
}