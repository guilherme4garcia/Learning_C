#include <stdio.h>

int main(void) {

  ///declaração de variaveis

  int quantidade_trigo[16];   /// vetor para a quantidade de grãos em cada casa do tabuleiro
  int total_trigo = 0;   /// Soma total da quantidade de  grãos
  int i, acumulador = 1;



  for(i = 0; i < 16; i++)
  {
    total_trigo += acumulador;      ///calculo soma total
    quantidade_trigo[i] = acumulador;     /// [i] = casa do tabuleiro, acumulador = quantidade de grão por passo
    acumulador += acumulador;             /// acumulador dobra a cada passo do loop;
    printf("%d ", quantidade_trigo[i]);   /// saída de dados, quantidade de grãos por casa;
  }


  printf("\nSoma: %d", total_trigo);     /// saída de dados, total grãos;




  return 0;
}
