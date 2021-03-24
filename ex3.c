#include <stdio.h>

int main(void)
{
    int vetor[10];
    int x;
    int i;


    printf("Digite o valor de x: ");
    scanf("%d", &x);

    for(i = 0; i <=9; i++)
    {
        printf("Digite os valores do vetor: " );
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i <=9; i++)
    {
        if(x == vetor[i])
        {
            printf("Valor encontrado na posição [%d]" ,i);
        }
        else{
            printf("Valor nao encontrado.");
        }
    }


    return(0);

}
