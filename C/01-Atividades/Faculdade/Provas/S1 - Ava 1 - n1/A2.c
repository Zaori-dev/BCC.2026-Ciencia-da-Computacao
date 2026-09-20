#include <stdio.h>

int main()
{
    float salario, aumento, salario_novo;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    if (salario < 1660)
    {
        aumento = salario * 15/100;
    }
    else if (salario < 2050)
    {
        aumento = salario * 10/100;
    }
    else
    {
        aumento = salario * 5/100;
    }

    salario_novo = salario + aumento;

    printf("O aumento foi de: R$ %.2f\n", aumento);
    printf("O salario novo foi de: R$ %.2f\n", salario_novo);

    return 0;
}