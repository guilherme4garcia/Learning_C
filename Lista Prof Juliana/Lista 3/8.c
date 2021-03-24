#include <stdio.h>



int main ()
{

	int i;
	int vetor[10] = {2, 5, 4, 54, 43, 22, 5, 9, 30, 15};
	int index = -1, x;

	printf("Digite um numero para buscar no vetor:\n");
	scanf("%d", &x);

	for(i = 0; i < 10; i++)
	{
		if(vetor[i] == x)
		{
			index = i;
			printf("Valor %d encontrado na posicao [%d] do vetor\n", x, index);
		}
  }

	if(index < 0)
	{
		printf("Valor nao encontrado\n");
	}


	return 0;
}
