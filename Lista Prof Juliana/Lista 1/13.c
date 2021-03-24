#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, resultado;
    do
    {
        printf("Digite um numero inteiro: \n");
        scanf("%d", &n1);
        
        printf("Digite um numero inteiro positivo: \n");
        scanf("%d", &n2);
    } while (n2 < 0);
    resultado = pow(n1, n2);
    printf("O valor de %d elevado a %d = %d", n1, n2, resultado);

  
return 0;
}