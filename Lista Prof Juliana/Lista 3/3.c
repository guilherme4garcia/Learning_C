#include <stdio.h>


int main ()
{
	//variaveis

	int i, data, vetor[10];  //0 - 9
  int contador = 0, maior = 0, media, soma = 0;

	//entrada de dados
	for (i = 0; i <= 9; i++)
	{
		
    vetor[i] = 0;
		
	}


	printf("Digite 10 números inteiros:\n");
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &data);
		if (data % 2 == 0)
		{
      vetor[i] = data;
		}
	
	}

 ///saida de dados

  for (i = 0; i <= 9; i++)
  {
    if(vetor[i] != 0)
    {
      soma += vetor[i];
      contador++;
      if(vetor[i] > maior)
      {
        maior = vetor[i];
      }
    } 
  }

  media = soma / contador;
  printf("A quantidade de valores armazenados foi = %d\n O maior valor encontrado = %d\n A media desses valores = %d", contador, maior, media);

	return 0;
}