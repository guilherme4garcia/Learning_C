#include <stdio.h>

int potencia(int x, int y);
int main(void) 
{
  int x, y;
  printf("Digite um numero: \n");
  scanf("%d", &x);
  printf("Digite uma potencia: \n");
  scanf("%d", &y); 
  printf("%d elevado a %d = %d", x, y, potencia(x, y));

  return 0;
}
int potencia(int x, int y)
{
  if(y == 1)
  {
    return x;
  }
  else
  {
    return x * potencia(x, y-1);
  }
}
