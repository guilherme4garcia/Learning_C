#include <stdio.h>

int par_impar(int n)
{
  if(n > 0)
  {
    if(n % 2 == 0)
    {
      return printf("1");
    }
    else
    {
      return printf("0");
    }
  }
  else
  {
    return printf("O NUMERO DEVE SER POSITIVO");
  }

}

int main(void)
{
  int n;
  printf("Digite um numero: \n");
  scanf("%d", &n);
  par_impar(n);

  return 0;
}

