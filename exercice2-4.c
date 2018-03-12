#include <stdio.h>
#include <string.h>


int anagrams(char tab1[], char tab2[]){

  int temp[255]= {0};
  for(int i=0; i<strlen(tab1); i++){
    printf("%d\n", tab1[i]);
    temp[tab1[i]]++;
    temp[tab2[i]]++;
  }

  for(int i=0;i<256;i++){
    if(temp[i]>0 && temp[i]%2 != 0){
      return 0;
    }
  }
  return 1;

}

int main(int argc, char const *argv[]) {

  char input1[1000];
  char input2[1000];

  printf("Enter 2 string to see if they are anagrams : \n" );
  scanf("%s %s", input1, input2);
  if(anagrams(input1, input2)){
    printf("Yes, these are anagrams\n");
    return 0;
  }
  printf("Nope, these aren't anagrams\n");
}
