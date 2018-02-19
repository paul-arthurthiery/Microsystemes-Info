#include <stdio.h>

int
main() {


  int i=1;
  int input;
  float sum=0;
  int largest;
  int smallest;
  float mean;

  while (1) {
    printf("Enter an int \n");
    scanf("%d", &input);
    sum += input;

    if(!input)
      break;
    if(input>largest){
      largest=input;
    }
    if(input<smallest){
      smallest=input;
    }

    i++;
  }


  printf("You entered %d ints\n", i);

  mean= sum/i;

  printf("The mean of these int is %f\n", mean);

  printf("The smallest element is %d\n", smallest);

  printf("The largest element is %d\n", largest);


}
