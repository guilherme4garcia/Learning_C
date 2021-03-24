#include <stdio.h>

void printArray(int array[]){
  int i;
  for (i = 0; i < 10; i++)
  {
    printf("%d ", i, array[i]);
  }
}

int main ()
{
	//variaveis
	int contador;
	int vetor[10];  //0 - 9

	//entrada de dados
	printf("Digite 10 numeros inteiros:\n");
	for (contador = 0; contador < 9; contador++)
	{
		scanf("%d\n", &vetor[contador]);
	}

  printArray(vetor);


	return 0;
}
