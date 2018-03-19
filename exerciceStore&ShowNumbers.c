#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[]) {
  int n, *p, *q;
  int sum=0;

  printf("How many ints do you want to enter ?\n");
  scanf("%d", &n);
  p = q = malloc(sizeof(int)*n);
  printf("Your size is %lu\n", sizeof(p));
  for (int i = 0; i < n; i++) {
    printf("Enter an int \n");
    scanf("%d", p++);
  }

  printf("Your ints are : \n");
  for (int i=0; i<n; i++){
    printf("%d\n", *q++);
    sum += *q;
  }

  printf("And the sum is : %d\n", sum);


}
