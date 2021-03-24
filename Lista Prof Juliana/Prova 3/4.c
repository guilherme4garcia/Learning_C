#include <stdio.h>


int main(void) {

  int vetor[200];
  int i, data, soma_impares = 0, contador = 0, media;

  	for (i = 0; i <= 199; i++)
	{

    vetor[i] = 0;

	}

  printf("Digite 200 numeros inteiros:\n");
	for (i = 0; i <= 199; i++)
	{
		scanf("%d", &data);
	  vetor[i] = data;

	}

  printf("NUMEROS PARES: \n");
  for (i = 0; i <= 199; i++)
	{

		if (vetor[i] % 2 == 0)
		{
      printf("Vetor[%d] = %d\n", i, vetor[i]);
		}
	}



  for (i = 0; i <= 199; i++)
	{

		if (vetor[i] % 2 != 0)
		{
      soma_impares += vetor[i];
      contador++;
		}
	}

  media = soma_impares / contador;

  printf("Soma dos numeros Impares: %d \n", soma_impares);
  printf("Media dos numeros Impares: %d \n", media);

  return 0;
  }
