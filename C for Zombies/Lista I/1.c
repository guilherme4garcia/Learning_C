#include <stdio.h>

int main()
{
   int A, B, resultado;

   printf("Digite dois numeros inteiros para serem somados: \n");
   scanf("%d", &A);
   scanf("%d", &B);

   resultado = A + B;

   printf("RESULTADO = %d \n", resultado);

    return 0;
}
