#include <stdio.h>



int main ()
{

	int i;
	int vetor[8];
	int inverso[8];

	for(i = 0; i < 8; i++)
	{
		printf("Digite um numero:\n");
		scanf("%d", &vetor[i]);
	}

	for (i = 0; i < 8; i++)
	{
    if(i >= 4)
    {
      inverso[i] = vetor[i-4];
    }
    else
    {
      inverso[i] = vetor[i+4];
    }
    printf("%d", inverso[i]);
	}


	return 0;
}
