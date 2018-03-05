#include <stdio.h>
#include <string.h>


int CompareChaines(char ch1[],char ch2[]) {
  int i=0;
  while(ch1[i] == ch2[i] && ch1[i]!='\0'){
    i++;
  }
  return ch1[i]-ch2[i];
}

int main(int argc, char const *argv[]) {

  printf("%d\n", CompareChaines("yo", "yo"));


}
