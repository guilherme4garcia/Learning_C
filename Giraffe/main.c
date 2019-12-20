#include <stdio.h>
#include <stdlib.h>

int main() //method
{
    char characterName[] = "Guilherme";  //variaveis
    int characterAge = 67;

    printf("There once was a man named %s\n", characterName);  //%s para str
    printf("he was %d years old.\n", characterAge);  //%d para int

    characterAge = 28;
    printf("He really like the name %s\n", characterName);
    printf("bud did not like being %d.\n", characterAge);

    return 0;
}
