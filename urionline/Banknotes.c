#include <stdio.h>

int main() {

    double valor;
    int nota_100, nota_50, nota_20, nota_10, nota_5, nota_2;
    int moeda_1, moeda_50, moeda_25, moeda_10, moeda_05, moeda_01;

    scanf("%lf", &valor);
    int notas = valor;
    int moedas = (valor - notas) * 100;

    if((moedas * 1000) % 10 == 9)
    {
        moedas++;
    }

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
    moeda_1 = notas/1;
    notas = notas%1;
    moeda_50 = moedas/50;
    moedas = moedas%50;
    moeda_25 = moedas/25;
    moedas = moedas%25;
    moeda_10 = moedas/10;
    moedas = moedas%10;
    moeda_05 = moedas/5;
    moedas = moedas%5;
    moeda_01 = moedas/1;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", nota_100);
    printf("%d nota(s) de R$ 50.00\n", nota_50);
    printf("%d nota(s) de R$ 20.00\n", nota_20);
    printf("%d nota(s) de R$ 10.00\n", nota_10);
    printf("%d nota(s) de R$ 5.00\n", nota_5);
    printf("%d nota(s) de R$ 2.00\n", nota_2);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", moeda_1);
    printf("%d moeda(s) de R$ 0.50\n", moeda_50);
    printf("%d moeda(s) de R$ 0.25\n", moeda_25);
    printf("%d moeda(s) de R$ 0.10\n", moeda_10);
    printf("%d moeda(s) de R$ 0.05\n", moeda_05);
    printf("%d moeda(s) de R$ 0.01\n", moeda_01);

    return 0;
}
