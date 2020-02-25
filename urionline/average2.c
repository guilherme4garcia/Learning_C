#include <stdio.h>

int main()
{

    double A, B, C, media; //declarar variáveis

    scanf("%lf", &A);  //ler valores
    scanf("%lf", &B);
    scanf("%lf", &C);

    media = (A * 2.0 + B * 3.0 + C * 5.0)/10;  //processar dadods

    printf("MEDIA = %.1lf\n", media);  //exibir dados

    return 0;

}
