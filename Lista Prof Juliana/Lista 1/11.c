#include <stdio.h>

int main()
{
    int x, contador, resultado;
    resultado = 0;
    x = -1;
    while (x < 0)
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &x);
    }
    
    for(contador = 1; contador <= x; contador++)
    {
      resultado = resultado + contador;
    }
  printf("A soma dos %d primeiros numeros naturais e %d", x, resultado);
  
return 0;
}