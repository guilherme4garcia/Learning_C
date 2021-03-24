#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome_disciplina[50];
    float nota;
    int peso;

}Disciplina;



int main()
{

  Disciplina valores[7];


  int i;
  float media_ponderada;

  for(i=0; i<7; i++) {
    strcpy(valores[i].nome_disciplina, "NULL");
    valores[i].nota = 0.0;
    valores[i].peso = 0;
  }


  for(i=0; i<7; i++) {
    printf("Digite nome da Disciplina: \n");
    scanf("%s%*c", &valores[i].nome_disciplina);
    printf("Digite a nota: \n");
    scanf("%f%*c", &valores[i].nota);
    printf("Digite o peso: \n");
    scanf("%d%*c", &valores[i].peso);
  }


    media_ponderada = (valores[0].nota * valores[0].peso + valores[1].nota * valores[1].peso + valores[2].nota * valores[2].peso + valores[3].nota * valores[3].peso + valores[4].nota * valores[4].peso + valores[5].nota * valores[5].peso + valores[6].nota * valores[6].peso) / (valores[0].peso + valores[1].peso + valores[2].peso + valores[3].peso + valores[4].peso + valores[5].peso + valores[6].peso);
    printf("MEDIA PONDERADA = %f", media_ponderada);

  return 0;
}

