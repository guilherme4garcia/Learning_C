#include <stdio.h>

int main()
{
    float M, MM;
    printf("Digite um valor em metros para ser convertido para milimetros: \n");
    scanf("%f", &M);

    MM = M * 1000;

    printf("%.2f milimetros \n", MM);

    return 0;
}
