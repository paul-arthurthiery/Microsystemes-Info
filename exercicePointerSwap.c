#include <stdio.h>

void switchInts(int *firstPoint, int *secondPoint){
  *firstPoint = *firstPoint + *secondPoint;
  *secondPoint = *firstPoint - *secondPoint;
  *firstPoint = *firstPoint - *secondPoint;
}

int main(int argc, char const *argv[]) {
  int firstInt = 5;
  int secondInt = 8;

  printf("First int is %d and second int is %d\n", firstInt, secondInt);
  switchInts(&firstInt, &secondInt);
  printf("First int is now %d and second int is now %d\n", firstInt, secondInt);
}
