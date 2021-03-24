#include <stdio.h>



int main ()
{
	//variaveis

	int i, quantidade;  //0 - 9

	//entrada de dados
	printf("Digite a quantidade de numeros a serem digitados:\n");
	scanf("%d", &quantidade);

	int vetor[quantidade];
  int inverso[quantidade];
  
	for (i = 0; i < quantidade; i++)
	{	
		printf("Digite um numero:\n");
		scanf("%d", &vetor[i]);
	}

  for (i = 0; i < quantidade; i++)
  {
    inverso[i] = vetor[(quantidade -1) - i];
  }
 ///saida de dados

  printf("Sequencia na ordem inversa:\n");
  for (i = 0; i < quantidade; i++)
  {
    printf("%d ", inverso[i]);
  }


	return 0;
}
