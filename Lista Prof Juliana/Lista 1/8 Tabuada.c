#include <stdio.h>

int main()
{
int num, contador;

printf("Digite um numero para calcular a tabuada: ");
scanf("%d", &num);
for(contador = 0; contador <= 12; contador++)
{
  printf("%d X %d = %d\n", num, contador, num * contador);
}

return 0;
}