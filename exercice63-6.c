#include <stdio.h>
#include <time.h>

int
main() {

  srand(time(NULL));
  int findMe = rand()%1000;
  int userTest;
  int counter;

  for (counter = 0; counter < 10; counter++) {

    if(counter == 0){
      printf("Try to find my number : \n");
    }

    scanf("%d", &userTest);

    if(userTest == findMe){
      printf("Yay you found the number !! \n");
      return 0;
    } else if (userTest <= findMe) {
      printf("Nope, my number is bigger \n");
    } else if (userTest >= findMe){
      printf("Nope, my number is smaller \n");
    }

  }

  printf("Too many tries, better luck next time ;) \n");

}
