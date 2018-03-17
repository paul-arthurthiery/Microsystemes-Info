#include <stdio.h>

int
main() {
  int firstInput;
  int secondInput;
  int firstInt;
  int secondInt;

  printf("Enter your first int : \n");
  scanf("%d", &firstInput);
  printf("Enter your second int : \n");
  scanf("%d", &secondInput);

  printf("\n");

  printf("Here are your ints with their bits moved 3 times to the right : \n");
  firstInt = firstInput >> 3 ;
  secondInt = secondInput >> 3 ;
  printf("%d , %d \n", firstInt, secondInt);

  printf("\n");

  printf("Here are your ints with their bits moved 2 times to the left : \n");
  firstInt = firstInput << 2 ;
  secondInt = secondInput << 2 ;
  printf("%d , %d \n", firstInt, secondInt);

  printf("\n");

  printf("Result of bit operations : \n");
  printf("& -> %d \n", (firstInt & secondInt));
  printf("| -> %d \n", (firstInt | secondInt));
  printf("~ -> %d , %d \n", ~firstInt, ~secondInt);

  printf("\n");

  printf("Result of boolean operations : \n");
  printf("&& -> %d \n", (firstInt && secondInt));
  printf("|| -> %d \n", (firstInt || secondInt));
  printf("! -> %d , %d \n", !firstInt, !secondInt);

  printf("\n");

  printf("Here are your ints' 3rd least significant bit : \n");
  firstInt = (firstInput>>2) & 1;
  secondInt = (secondInput>>2) & 1;
  printf("%d , %d \n", firstInt, secondInt);

  printf("\n");

  printf("Here are your ints' decomposed in 4 bytes : \n");
  printf("%d -> %d %d %d %d \n", firstInput, (firstInput>>24)&255, (firstInput>>16)&255, (firstInput>>8)&255, firstInput&255);
  printf("%d -> %d %d %d %d \n", secondInput, (secondInput>>24)&255, (secondInput>>16)&255, (secondInput>>8)&255, secondInput&255);


}
