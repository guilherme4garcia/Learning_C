#include <stdio.h>

int main()
{
    int x, contador, impar;
    contador = 0;
    impar = 1;
    x = -1;
    while (x < 0)
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &x);
    }
    
    while(contador < x)
    {
      printf("%d\n", impar);
      contador++;
      impar = impar + 2;
    }
  
return 0;
}