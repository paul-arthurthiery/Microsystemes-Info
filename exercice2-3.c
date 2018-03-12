#include <stdio.h>
#include <string.h>


void getCesar(char ch[], int d){

  int temp;

  for(int i=0; i<strlen(ch); i++){
    temp = ch[i];
    printf("%d\n", temp);
    if(ch[i]!= 32){
      temp=temp+d;
      printf("%d\n", temp);

    }

    while((ch[i]>96 && temp>122) || (temp>90 && ch[i]<91)){
      printf("Overran alphabet for value %d\n", temp);
      temp=temp-25;
      printf("New value %d\n", temp);
    }
    ch[i]=temp;
  }
}

int main(int argc, char const *argv[]) {
  char input[1000];
  int d;

  printf("Give the String to shift : \n");
  scanf("%999[0-9a-zA-Z ]", input);
  printf("Now give me the amount to shift it by : \n");
  scanf("%d", &d);
  getCesar(input, d);
  printf("%s\n", input);
  return 0;
}
