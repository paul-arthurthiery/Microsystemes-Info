#include <stdio.h>
int main(int argc, char const *argv[]) {
  int leInt = 12;
  char leChar = 'a';
  double leDouble = 2.2;

  int *pInt = &leInt;
  char *pChar = &leChar;
  double *pDouble = &leDouble;

  printf("Int : %d %p %p \n", *pInt, pInt, &pInt);
  printf("Char : %c %p %p \n", *pChar, pChar, &pChar);
  printf("Double : %f %p %p \n", *pDouble, pDouble, &pDouble);
}
