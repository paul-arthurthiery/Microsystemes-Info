#include <stdio.h>

int
main() {

  int firstInput;
  int secondInput;
  char operateur;

  printf("Enter your operation : \n");
  scanf("%d %s %d", &firstInput, &operateur, &secondInput);

  switch (operateur) {
    case '+' : printf("%d\n", firstInput+secondInput);
      break;
    case '-' : printf("%d\n", firstInput-secondInput);
      break;
    case '*' : printf("%d\n", firstInput*secondInput);
      break;
    case '/' : printf("%d\n", firstInput/secondInput);
  }


}
