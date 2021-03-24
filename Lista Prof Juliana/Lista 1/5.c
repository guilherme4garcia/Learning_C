#include <stdio.h>
#include <stdlib.h>

int main()
{

int n;
printf("Digite um numero para saber se e PAR ou IMPAR\n");
scanf("%d", &n);
if(n % 2 == 0)
    {
        printf("PAR\n");
    }
    else
    {
        printf("IMPAR\n");
    }


return 0;
}
