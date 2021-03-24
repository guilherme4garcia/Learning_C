#include <stdio.h>


int main ()
{
	//variaveis

	int i, vetor[10];  //0 - 9

	//entrada de dados

	printf("Digite 10 números inteiros:\n");
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &vetor[i]);
	}

 ///saida de dados

  for (i = 0; i <= 9; i++)
  {
    if (vetor[i] >= 20)
    {
      printf("%d ", vetor[i]);
    }
    
  }


	return 0;
}