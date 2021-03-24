#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct
{
    char nome[100];
    char telefone[11];
    char email[50];
}Agenda;
 

void pesquisar_nome (char *nome_pessoa){
  printf("Nome: %s", nome_pessoa);
}

 
int main()
{
  Agenda telefone;
  Agenda pessoa;
  
  
  char agenda[100];
  int i;
  char pesquisa[50];

  for(i=0;i<10;i++){

    printf("Digite um nome para armazenar na agenda: \n");
    scanf("%s", pessoa.nome);
  }
  
  printf("PESQUISE UM NOME NA AGENDA: ");
  scanf("%s", pesquisa);

  
  

  return 0;
}

