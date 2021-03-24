#include <stdio.h>

int main(void)
{
    int A[5];
    int B[8];
    int i;
    int j;

    printf("Digite os valores do vetor A: ");
    for (i = 0; i <=4; i++)
    {
     scanf("%d", &A[i]);
    }
    printf("Digite os valores do vetor B: ");
     for (i = 0; i <=7; i++)
    {
     scanf("%d", &B[i]);
    }

    printf("Valores repetidos: \n");
    for(i = 0; i <=4; i++)
    {
        for(j= 0; j <=7; j++)
        {
            if (A[i] == B[j])
            {
              printf("\n %d \n" ,B[i]);
            }
        }
    }


    return(0);
}
