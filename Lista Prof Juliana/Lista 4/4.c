#include <stdio.h>

/// FUNÇÕES

///Função calcula a quantidade de caracteres da string

int lenght(char *str)             
{
    int total=0;

    while( str[total] != '\0')      /// '\0' representa o final da string;
        total++;

    return total;
}

 ///Função para contar as vogais

int contarVogais(char palavra[]) {         
    char vogais[] = "aeiouAEIOU";        ///declaração das vogais em minusculo e maiusculo para contagem;
    int numVogais = 0, i, j;

    for (i = 0; palavra[i] != '\0'; i++) {
        for (j = 0; vogais[j] != '\0'; j++) {
            if (vogais[j] == palavra[i]) {            ///verificação se é a letra do nome é ou não uma vogal
                numVogais++;                          /// recebe a quantidade de vogais
                break;
            }
        }
    }

    return numVogais;

}

///Função para contar as consoantes

int contarConsoante(char palavra[]) {           
    char consoante[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";   ///declaração das consoantes em minusculo e maiusculo para contagem;
    int numConsoante = 0, i, j;

    for (i = 0; palavra[i] != '\0'; i++) {
        for (j = 0; consoante[j] != '\0'; j++) {
            if (consoante[j] == palavra[i]) {            ///verificação se é a letra do nome é ou não uma consoante
                numConsoante++;                          /// recebe a quantidade de consoantes
                break;
            }
        }
    }

    return numConsoante;

}

///Função para contar os espaços

int contarEspaco(char palavra[]) {
    char espaco[] = " ";                        ///declaração do espaço como referencia para checar contagem;
    int numEspaco = 0, i, j;

    for (i = 0; palavra[i] != '\0'; i++) {
        for (j = 0; espaco[j] != '\0'; j++) {
            if (espaco[j] == palavra[i]) {     ///verificação se o carcter armazenado na  posição de nome[i] é ou não um espaço
                numEspaco++;                   /// recebe a quantidade de espaços
                break;
            }
        }
    }

    return numEspaco;

}


int main(void) {
  
  char nome[100];   ///vetor utilizado para armazenar o nome;
  int i;   

  ///entrada de dados
  printf("Digite seu nome:\n");
  gets(nome);     ///gets atribui o que foi digitado para o vetor nome[100]


  ///saida de dados

  ///A
  printf("O número de caracteres do seu nome é: %d\n", lenght(nome));
  
  ///B
  printf("Vogais: %d\n", contarVogais(nome));
  printf("Consoantes: %d\n", contarConsoante(nome));
  printf("Espaços: %d\n", contarEspaco(nome));

  return 0;
  
}