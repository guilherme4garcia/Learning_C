#include <stdio.h>

int main()
{
    int a, b, x;
    a = -1;
    b = -1;
    while (a < 0 || b <0)
    {
     printf("Digite o primeiro numero: \n");
     scanf("%d", &a);
     printf("Digite o segundo numero: \n");
     scanf("%d", &b);
    }

    x = a + b;
    printf("Resultado = %d", x);
    return 0;
}
