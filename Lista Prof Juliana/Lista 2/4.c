#include <stdio.h>

int triangulo(x, y, z)
{
if(x == y && x == z)
 {
   return printf("Equilatero");
 }
 if (x != y && x != z && y != z)
 {
   return printf("Escaleno");
 }
 else
 {
   return printf("Isosceles");  
 }
}

int triangulo_test(x, y, z)
{
  if( x < y + z && y < x + z && z < x + y)
  {
    return triangulo(x, y, z);
  }
  else
  {
    return printf("TRIANGULO IMPOSSIVEL");
  }
}

int main(void) 
{
  int x, y, z;
  printf("Digite 3 medidas de lados \n");
  printf("Primeiro lado: \n");
  scanf("%d", &x);
  printf("Segundo lado: \n");
  scanf("%d", &y);
  printf("Terceiro lado: \n");
  scanf("%d", &z);

  
  triangulo_test(x, y, z);

  return 0;
}