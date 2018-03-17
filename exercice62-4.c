#include <stdio.h>

int
main() {

  int input;
  int current=1;

  printf("Give me an int : \n");
  scanf("%d", &input);

  for (int i = 0; i < input; i++) {
    current = input%10;
    if (current) {
      printf("Digit number %d is %d\n", i+1, current);
      input /= 10;
    }
  }
}
