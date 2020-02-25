#include <stdio.h>

int main()
{

    double n1, n2, media; //declarar variáveis

    scanf("%lf", &n1);  //ler valores
    scanf("%lf", &n2);

    media = (n1 * 3.5 + n2 * 7.5)/11;  //processar dadods

    printf("MEDIA = %.5lf\n", media);  //exibir dados

    return 0;

}
