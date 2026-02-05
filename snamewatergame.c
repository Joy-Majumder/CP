#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char me, char cp) {

  if (me == cp) {
    return 0;
  }

  if (me == 's' && cp == 'g') {
    return -1;
  } else if (me == 'g' && cp == 's') {
    return 1;
  }

  if (me == 's' && cp == 'w') {
    return 1;
  } else if (me == 'w' && cp == 's') {
    return -1;
  }

  if (me == 'g' && cp == 'w') {
    return -1;
  } else if (me == 'w' && cp == 'g') {
    return 1;
  }
}

int main() {
  char me, cp;
  srand(time(0));
  int number = rand() % 100 + 1;

  // cp = 's';
  if (number < 33) {
    cp = 's';
  } else if (number > 33 && number < 66) {
    cp = 'w';
  } else {
    cp = 'g';
  }
  printf("Enter 's' for snake , w for water and g for gun \n");
  scanf("%c", &me);

  int result = snakeWaterGun(me, cp);
  printf("You Choose %c and Computer Choose %c. \n", me, cp);

  if (result == 0) {
    printf("Game is Draw\n");
  } else if (result == 1) {
    printf("You win\n");
  } else {
    printf("You lose\n");
  }

  return 0;
}
