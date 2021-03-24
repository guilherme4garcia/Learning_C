#include <stdio.h>
#include <stdlib.h>


void troca (int *p, int *q){ // passagem por referencia
  int temp;
  
  temp = *p;
  *p = *q;
  *q = temp;
}

int main(void) {

  int num1, num2;

  printf ("Entre com primeiro valor\n");
  scanf ("%d", &num1);
  printf ("Entre com o segundo valor:\n");
  scanf ("%d", &num2);
  troca (&num1, &num2);
  printf (" Num 1:%d\n",num1);
  printf (" Num 2:%d",num2);



  return 0;
}