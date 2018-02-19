#include <stdio.h>

int
main() {

  for (int i='A'; i<='Z'; i++) {
    printf("%d, %c - %d, %c \n",i, i, i+('a'-'A'), i+('a'-'A') );
  }

}
