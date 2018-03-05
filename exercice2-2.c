#include <stdio.h>

int NbOccurrencesTab(int tab[],int n,int a){
  int nbOccurrences = 0;
  for(int i=0; i<n; i++){
    if(tab[i]==a){
      nbOccurrences++;
    }
  }
  return nbOccurrences;
}

int ContientDoublons(int tab[],int n){
  for(int j=0; j<n; j++){
    if(NbOccurrencesTab(tab, n, tab[j]) > 1){
      return 1;
    };
  };
  return 0;
}


int main(int argc, char const *argv[]) {
  int T[] = {0, 5, 1};
  printf("%d\n", ContientDoublons(T, 3));
}
