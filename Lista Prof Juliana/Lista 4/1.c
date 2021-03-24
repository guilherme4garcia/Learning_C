#include <stdio.h>
#include <string.h>

int main(void) {
  
  char frase[100];
  int len = 0, i;
  

  printf("Digite uma frase de até 40 caracteres:\n");
  scanf("%s", frase);
  len = strlen(frase);

  if(len < 40)
  {
    for(i=0; i <= len; i++)
    {
      printf("%c\n", frase[i]);
    }
  }
  else
  {
    printf("Tente novamente. Digite uma frase de ate 40 caracteres:\n");
    scanf("%s", frase);
    len = strlen(frase);
  }

  

  return 0;
}