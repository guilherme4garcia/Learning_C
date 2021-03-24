#include <stdio.h>

int main()
{
    int x, y;
    x = -1;
    while (x < 0)
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &x);
    }

    y = x * x;
    printf("O quadrado de %d = %d\n", x, y);
    return 0;
}
