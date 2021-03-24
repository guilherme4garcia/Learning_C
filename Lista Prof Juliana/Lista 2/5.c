#include <stdio.h>

int fat( int n);
int main(void) 
{
  int n;
  printf("Digite um numero para calcular seu fatorial \n");
  scanf("%d", &n);
  printf("Fatorial = %d", fat(n));


  fat(n);

  return 0;
}
int fat(int n)
{
  if(n < 2)
  {
    return 1;
  }
  else
  {
    return n * fat(n-1);
  }
}
