#include <stdio.h>

int main(void) {

  int M[10] = {1,2,3,4,5,6,7,8,9,10};
  int N[10] = {1,1,1,1,1,1,1,1,1,1};
  int i, P = 0;


  for(i=0; i<10; i++)
  {
   P = P + M[i] * N[i];
  }

  printf("O PRODUTO ESCALAR DE M POR N E: %d", P);
  return 0;
}