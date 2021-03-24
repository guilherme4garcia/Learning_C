#include <stdio.h>

int primo(int n)
{
  int contador, resultado;
  for(contador = 1; contador <= n; contador++)
  {
    if(n % contador == 0)
    {
      resultado++;
  
    }
  }
  if(resultado > 2 || n == 1)
  {
    return printf("%d NAO E PRIMO", n);
  }
  else
  {
    return printf("%d E PRIMO", n);
  }
  
}

int main(void) {
  int contador, n, resultado;
  resultado = 0;
  printf("Numero: \n");
  scanf("%d", &n);
  
  primo(n);

  return 0;
}