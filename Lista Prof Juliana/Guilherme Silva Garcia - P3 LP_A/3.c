#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[100];
    char telefone[11];
    char email[50];
    int aniversario[4];
}Agenda;




void busca_pessoa(int ano_nasc){
     int i;
       for (i = 0; i <=1; i ++){
         if ((strcmp(ano, pessoa[i].aniversario))==0){
            printf("\n");
            printf(pessoa[i].aniversario);
         }
     }
}


int main()
{
  Agenda telefone;
  Agenda pessoa;
  Agenda data;

  char agenda[100];
  int i;
  char pesquisa[50];

  for(i=0;i<10;i++){

    printf("Digite um nome para armazenar na agenda: \n");
    scanf("%s", pessoa.nome);
  }

  printf("PESQUISA POR ANIVERSARIO: ");
  scanf("%s", pesquisa);




  return 0;
}

