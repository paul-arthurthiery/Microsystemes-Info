#include <stdio.h>

//floats are only precise to 7 digits, so the result isn't exactly equal to 1.0
int main(int argc, char **argv) {
  float f = 0.0;
  int i;
  printf("%.12f,\n", f);
  for (i = 0; i < 10; i++) {
    f += 0.1;
    printf("%.12f,\n", f);
  }
  //printf("%.12f, %.12f\n", f, 1.);
  if (f==1.0) printf("f egal 1.0\n");
  else printf("f different de 1.0\n");
  return 0;
}
