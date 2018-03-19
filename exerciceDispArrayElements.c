void f(int *T, int n){
  while(n>0){
    printf("%d\n", *T++);
    n--;
  }
}


int main(int argc, char const *argv[]) {
  int T[] = {3, 2, 3, 0, 5, 1, 6};
  f(T, 7);
}
