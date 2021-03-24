#include <stdio.h>

int main()
{

int n, resposta; 

n = 1;
while(n > 0)
{
  printf("Entre com uma sequencia de numeros inteiros nao-nulos, seguida por 0:\n");
  scanf("%d", &n);
  resposta = n * n; 
  printf("O quadrado do numero %d = %d\n", n, resposta);

}while (n < 1);


return 0;
}
