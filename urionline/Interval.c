#include <stdio.h>

int main()
{
    float n;

    scanf("%f", &n);

    if(n >= 0 && n <= 25.0000)
    {
        printf("Intervalo [0,25]");
    }

    if(n >= 25.00001 && n <= 50.0000000)
    {
        printf("Intervalo (25, 50]");
    }

     if(n >= 50.0000001 && n <= 75.0000000)
    {
        printf("Intervalo (50, 75]");
    }

     if(n >= 75.0000001 && n <= 100.0000000)
    {
        printf("Intervalo (75, 100]");
    }

     if(n < 0 || n > 100)
    {
        printf("Fora de intervalo");
    }



    return 0;
}
