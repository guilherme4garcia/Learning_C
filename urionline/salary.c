#include <stdio.h>

int main()
{

    int number, hours;
    float sh, salary;

    scanf("%d", &number);  //ler valores
    scanf("%d", &hours);
    scanf("%f", &sh);

    salary = hours * sh;  //processar dadods

    printf("NUMBER = %d\n", number);  //exibir dados
    printf("SALARY = U$ %.2f\n", salary);
    return 0;

}
