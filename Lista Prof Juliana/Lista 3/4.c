#include <stdio.h>
#include <math.h>

void binary_decimal (int vetor[5])
{

  int inverso[5];  
  int decimal = 0;
  int i;

   for (i = 0; i <= 4; i++)
  {
    inverso[i] = vetor[4 - i];

  }

  for(i = 0; i <= 4; i++)
  {
    if (inverso[i] == 1)
    {
      decimal += 1 * pow(2, i);
    }
  }

  printf("%d", decimal);
}

int main ()
{
  int binary[5] = {1, 0, 0, 1, 0} ; //// VALOR BINARIO
 
  binary_decimal(binary);

	return 0;
}

 