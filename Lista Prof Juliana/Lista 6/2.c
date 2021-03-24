#include <stdio.h>

int main() {

  int x;

  //declaração de variável ponteiro
  int *p; 
    
  printf("Digite um numero inteiro positivo:\n ");
  
  scanf("%d", &x);

  p = &x;

  printf("Valor da variável: %d\n", *p);
  printf("Endereço memória: %p", p);

  return 0;

}
  


