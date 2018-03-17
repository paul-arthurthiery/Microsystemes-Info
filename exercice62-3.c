#include <stdio.h>

int
main() {

  int numberOfLoops;
  int positives=0;
  int negatives=0;
  int zeroes=0;
  int temp;

  printf("Enter the number of ints you wish to enter : \n");
  scanf("%d", &numberOfLoops);

  for (int i = 0; i < numberOfLoops; i++) {
    printf("Enter int number %d : \n", i+1);
    scanf("%d", &temp);
    if(temp){
      if(temp>0){
        positives++;
      } else{
        negatives++;
      }
    } else {
      zeroes++;
    }
  }

  printf("You entered %d positive ints \n", positives);
  printf("You entered %d negative ints \n", negatives);
  printf("You entered %d zeroes \n", zeroes);


}
