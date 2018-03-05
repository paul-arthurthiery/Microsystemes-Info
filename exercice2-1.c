#include <stdio.h>
#include <string.h>


int CompareChaines(char ch1[],char ch2[]) {
  for (int i = 0; i < strlen(ch1); i++) {
    if(ch1[i]>ch2[i]){
      return 1;
    } else if(ch1[i]<ch2[i]){
      return -1;
    }
  }
  return 0;
}

int main(int argc, char const *argv[]) {

  printf("%d\n", CompareChaines("salut", "yo"));


}
