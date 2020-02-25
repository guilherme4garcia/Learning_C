#include <stdio.h>

int main() {

    int anos, meses, dias, resto, input;

    scanf("%d", &input);
    anos = input/365;
    resto = input%365;
    meses = resto/30;
    dias = resto%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
    return 0;
}
