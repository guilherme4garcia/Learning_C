#include <stdio.h>



int main ()
{

	int i, quantidade;
  int index;
  float best_time;
  float media, tempo_total;

	printf("Digite a quantidade de voltas da corrida:\n");
	scanf("%d", &quantidade);

	float vetor[quantidade];
  
  for (i = 0; i < quantidade; i++)
	{	
		printf("Digite o tempo de cada volta:\n");
		scanf("%f", &vetor[i]);
	}

  best_time = vetor[0];
  index = 0;
  tempo_total = 0;

  for(i = 0; i < quantidade; i++)
  {
    tempo_total = tempo_total + vetor[i];
    if (best_time > vetor[i])
    {
      best_time = vetor[i];
      index = i + 1;
    }
  }

  media = tempo_total / quantidade;

  printf("MELHOR TEMPO = %f\n", best_time);
  printf("MELHOR VOLTA = %d\n", index);
  printf("TEMPO MEDIO = %f\n", media);

  return 0;
}