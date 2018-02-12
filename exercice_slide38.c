#include <stdio.h>

int
main() {
  int intTable[3];
  char carTable[20];

  for (int i = 0; i < 3; i++) {
    printf("Enter your int number %d : \n", i+1);
    scanf ("%d", &intTable[i]);
  }

  printf("Enter your String : \n");
  scanf("%s", carTable);



  printf("Your int table is : [%d, %d, %d]\n", intTable[0], intTable[1], intTable[2]);

  printf("Your char table is : %s\n", carTable);
}
