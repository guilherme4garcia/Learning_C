#include <stdio.h>
#include <math.h>

/// A) 

float calculo_distancia(int x1, int x2, int y1, int y2) {
  
  return sqrt(pow(x2-x1,2) + pow(y2-y1, 2));      ///formula calulo de distancia
 
}


/// B)

int main(void) {

  int x1, x2, y1, y2;      /// declaração das variaveis


  /// entrada de dados

  printf("Digite o valor de x1: \n");
  scanf("%d", &x1);
  printf("Digite o valor de x2: \n");
  scanf("%d", &x2);
  printf("Digite o valor de y1: \n");
  scanf("%d", &y1);
  printf("Digite o valor de y2: \n");
  scanf("%d", &y2);

  ///saída de dados

  printf("%f", calculo_distancia(x1, x2, y1, y2));     ///chamada da função

  return 0;
}