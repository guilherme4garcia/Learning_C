#include <stdio.h>

int main(void) {

  int vetor[10] = {1, 2, 3, 0, 7, 0, 20, 10, 9, 33};
  int i;

  for(i=0; i<10; i++)
  {
    if(vetor[i] == 0)
    {
      vetor[i] = vetor[i+1];
      vetor[-1] = 0;
    }
    printf("%d", vetor[i]);
  }

   
  return 0;
}