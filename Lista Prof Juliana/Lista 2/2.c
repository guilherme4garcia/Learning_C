#include <stdio.h>
#include <stdbool.h>


//////// Olá professora, eu testei meu código no Python e a lógica dele está certa, o problema que eu encontrei foi na syntax quando eu uso true/false. Tentei usar o return 0 e 1 mas também não deu certo, não consegui entender porque. ////////

int primo(int n)
{

  int contador, resultado;
  for(contador = 2; contador <= n; contador++)
  {
    if(n % contador == 0)
    {
      resultado++;

    }
  }
  if(resultado > 2 || n == 1)
  {
    return false;
  }
  else
  {
    return true;
  }

}

int somaprimo(int n)
{
int contador = 0, resposta = 0;

  while(contador <= n)
  {
    if(primo(contador) == true)
    {
      resposta = resposta + contador;
    }
    else
    {
      n++;
    }
    contador++;
  }
  return resposta;
}



int main(void)
{
  int contador, n, resultado;
  resultado = 0;
  printf("Numero: \n");
  scanf("%d", &n);

  somaprimo(n);

  return 0;
}
