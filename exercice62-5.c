#include <stdio.h>

int
main() {

  char aChar[1000];
  int counter;

  printf("Give me an string smaller than 1000 characters and I'll tell you its length : \n");
  scanf("%s", &aChar);

  for (counter = 0; counter < 1000; counter++) {
    if (aChar[counter] == '\0') {
      break;
    }
  }

  printf("You entered %d characters \n", counter);

}
