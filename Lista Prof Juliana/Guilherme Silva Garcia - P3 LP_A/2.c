#include <stdio.h>
#include <string.h>

int main(void) {

  char frase[100];
  int len = 0, i;


  printf("Digite uma frase:\n");
  scanf("%[^\n]s", frase);
  len = strlen(frase);


  for(i=len -1; i >= 0; i--)
  {
    printf("%c", frase[i]);
  }



  return 0;
}
