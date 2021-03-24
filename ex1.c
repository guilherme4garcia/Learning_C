#include <stdio.h>
#include <string.h>

int main(void)
{
    char valores[50];
    int i;
    int len;


    printf("Digite uma sequencia de numeros: ");
    scanf("%s", &valores);

    len = strlen(valores);

    for(i = 0; i <= len; i++)
    {
        printf("%s \n" ,valores[i]);
    }


    return(0);

}
