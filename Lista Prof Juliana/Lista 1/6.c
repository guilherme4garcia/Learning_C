#include <stdio.h>

int main()
{
	int x, y, z, maior, menor, meio;
	printf("Digite tres numeros: \n");
	scanf("%d\n", &x);
	scanf("%d\n", &y);
	scanf("%d", &z);

  if(x > y && x > z)
	{
		maior = x;
	}
	if(y > x && y > z)
	{ 
		maior = y;
	}
	if(z > x && z > y)
  {
    maior = z;
  }
  
  /// maior encontrado

  if(x < y && x < z)
  {
    menor = x;
  }
  
  if(y < x && y < z)
  {
    menor = y;
  } 
  
  if(z < x && z < y)
  {
    menor = z;
  }

  /// menor encontrado

  if(x < maior && x > menor)
  {
    meio = x;
  }
  if(y < maior && y > menor)
  {
    meio = y;
  }
  if(z < maior && z > menor)
  {
    meio = z;
  }

  printf("%d, %d, %d", menor, meio, maior);
	return 0;
}