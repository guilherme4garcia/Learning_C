#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int ano, idade, atual;
time_t currentTime;
struct tm *timeinfo;

currentTime = time(NULL);

timeinfo = localtime(&currentTime);
atual = timeinfo->tm_year + 1900;

printf("Digite o ano que voce nasceu: \n");
scanf("%d", &ano);
idade = atual - ano;
printf("Sua idade: %d anos", idade);

return 0;
}
