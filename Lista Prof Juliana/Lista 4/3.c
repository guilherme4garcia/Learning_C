#include <stdio.h>
#include <string.h>


int compararStrings(char str1[], char str2[]) {
    int i = 0;

    do {
        if(str1[i] != str2[i]) {
            return 0;
        }
        i++;
    } while(str1[i] != 0);

    return 1;
}

int main(void) {

  char frase[50];
  char inverso[50];
  int i, j=0;
  int r;

  printf("Digite uma frase:\n");
  scanf("%[^\n]s", frase);
  
  for(i = strlen(frase)- 1; i >= 0; i--)
  {
    inverso[j] = frase[i];
    j++;
  }
  
  printf("%d", compararStrings(frase, inverso));
  
  return 0;
}

