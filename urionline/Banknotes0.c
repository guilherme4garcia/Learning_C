#include <stdio.h>

int main() {


    int nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, nota_1, notas;


    scanf("%d", &notas);
    int valor = notas;

    nota_100 = notas/100;
    notas = notas%100;
    nota_50 = notas/50;
    notas = notas%50;
    nota_20 = notas/20;
    notas = notas%20;
    nota_10 = notas/10;
    notas = notas%10;
    nota_5 = notas/5;
    notas = notas%5;
    nota_2 = notas/2;
    notas = notas%2;
    nota_1 = notas/1;


    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", nota_100);
    printf("%d nota(s) de R$ 50,00\n", nota_50);
    printf("%d nota(s) de R$ 20,00\n", nota_20);
    printf("%d nota(s) de R$ 10,00\n", nota_10);
    printf("%d nota(s) de R$ 5,00\n", nota_5);
    printf("%d nota(s) de R$ 2,00\n", nota_2);
    printf("%d nota(s) de R$ 1,00\n", nota_1);

    return 0;
}
