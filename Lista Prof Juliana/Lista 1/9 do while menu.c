#include <stdio.h>

int main()
{
int resposta, op, n1, n2; 

do
{
printf("Entre com a operacao desejada: \n");
printf("(1)- DIVISAO\n");
printf("(2)- RESTO DA DIVISAO\n");
printf("(3)- ADICAO\n");
printf("(4)- MULTIPLICACAO\n");
scanf("%d", &op);
}while (op < 1 || op > 4);

printf("Entre com o primeiro numero: \n");
scanf("%d", &n1);
printf("Entre com o segundo numero: \n");
scanf("%d", &n2);

if(op == 1)
{
 resposta = n1 / n2; 
}
if(op == 2)
{
  resposta = n1 % n2;
}
if(op == 3)
{
  resposta = n1 + n2;
}
if(op == 4)
{
  resposta = n1 * n2;
}

printf("Resultado = %d", resposta);
return 0;
}
