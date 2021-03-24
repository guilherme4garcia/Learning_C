#include <stdio.h>

int divisores(int n)
{
  int contador, resultado;
  resultado = 0;

  for(contador = 1; contador <= n; contador++)
  {
    if (n % contador == 0)
    {
      resultado = resultado + 1;
    }
  }
  return printf("O numero %d possui %d divisores", n, resultado);
}

int main(void) 
{
  int n;
  printf("Numero: \n");
  scanf("%d", &n);
  
  divisores(n);

  return 0;
}