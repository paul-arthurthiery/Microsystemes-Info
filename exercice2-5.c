#include <stdio.h>
#include <string.h>


int isString1InString2(char tab1[], char tab2[]){
  int isInString=0;
  for(int i=0; i<strlen(tab2); i++){
    if (tab1[isInString]==tab2[i]) {
      printf("%c is in %s", tab1[isInString], tab2);
      isInString++;
      printf("isInString is of value : %d\n", isInString);
    } else if(isInString==strlen(tab1)){
      printf("isInString equal to input length, returning its value\n");
      return isInString;
    } else {
      isInString = 0;
    }
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  char string1[1000];
  char string2[1000];

  printf("Give me 2 strings and I will tell you if the first is in the second \n");
  printf("First give what you want to find\n");
  scanf("%s", string1);
  printf("Now give me in what you want to find it\n");
  int c;
  while ((c = getchar()) != EOF && c != '\n');
  fgets(string2, 1001, stdin);
  if(isString1InString2(string1, string2)>0)
    printf("Your first string is in your second string\n");
  else
    printf("Your first string is not in your second string\n");


}
