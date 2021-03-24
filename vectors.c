#include <stdio.h>

int main(void)
{
    int vetor[8];
    int i;

    for(i = 0; i <=7; i++)
    {
        printf("Digite os valores do vetor: " );
        scanf("%d", &vetor[i]);
    }


    int vetorf[8] = {vetor[4], vetor[5], vetor[6], vetor[7], vetor[0], vetor[1], vetor[2], vetor[3]};

    for(i = 0; i <=7; i++)
    {
        printf("%d" ,vetorf[i]);

    }
    return(0);

}
