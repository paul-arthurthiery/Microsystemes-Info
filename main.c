#include <stdio.h>

int
main(int argc, char **argv) {
  char a_word[80];
  puts("Hello, World!");
  puts("Now say something : ");
  scanf ("%s", a_word);
  printf ("You entered: %s\n", a_word);
  return 0;
}
