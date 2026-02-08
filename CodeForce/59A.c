#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int upper = 0;
	int lower = 0;
    char x[101];

    fgets(x, sizeof(x), stdin);


    for (int i = 0; x[i] != '\0'; i++) {
      if(isupper(x[i])){
		// x[i] = toupper(x[i]);
		 upper++;
	  } else if(islower(x[i])){
		  //x[i]=tolower(x[i]);
		  lower++;
	  }
    }
	for (int i = 0; x[i] != '\0'; i++) {
        if (upper > lower)
            x[i] = toupper(x[i]);
        else
            x[i] = tolower(x[i]);
    }

    printf("%s", x);
    return 0;
}

