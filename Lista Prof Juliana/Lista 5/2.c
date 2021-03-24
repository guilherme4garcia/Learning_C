#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  
  int matriz[4][4];
  int i, j;     /// i = linha  j = coluna
  int linha, coluna, soma_l = 0, soma_c = 0;
  srand(time(NULL));  /// semente muda de acordo com o relogio do sistema

  for(i=0; i<4; i++)
    for(j=0; j<4; j++)
    {
      matriz[i][j] = rand() % 20;
    }

  printf("Informe uma linha para ser exibida:\n");
  scanf("%d", &linha);


  for(i=0; i<4; i++)
    for(j=0; j<4; j++)
    {
      if(i == linha)
      {
        printf ("\nElemento[%d][%d] = %d\n", i, j,matriz[i][j]);
        soma_l = soma_l + matriz[i][j];
      }
    }
  printf("\nA soma dos valores na linha %d é igual = %d\n", linha, soma_l);

  printf("\nInforme uma coluna para ser exibida:\n");
  scanf("%d", &coluna);

  for(i=0; i<4; i++)
    for(j=0; j<4; j++)
    {
      if(j == coluna)
      {
        printf ("\nElemento[%d][%d] = %d\n", i, j,matriz[i][j]);
        soma_c = soma_c + matriz[i][j];
      }
    }

  printf("\nA soma dos valores na coluna %d é igual = %d\n", coluna, soma_c);


  printf("\nMATRIZ TRANSPOSTA: \n");
  for(i=0; i<4; i++)
    for(j=0; j<4; j++)
    {
      printf ("\nElemento[%d][%d] = %d\n", i, j,matriz[j][i]);
    }



  return 0;
}