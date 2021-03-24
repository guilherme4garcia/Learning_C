#include <stdio.h>

int main()
{
    int x;
    x = -1;
    while (x < 0)
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &x);
    }
    printf("NUMERO DIGITADO: %d", x);
    return 0;
}
