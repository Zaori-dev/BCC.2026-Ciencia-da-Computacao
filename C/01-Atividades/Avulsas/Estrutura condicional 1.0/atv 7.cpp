//Questão 7
//Se a idade for maior ou igual a 18:
//Maior de idade
//Caso contrário:
//Menor de idade
//Qual estrutura?

#include<stdio.h>
int main()
{
    int idade;

    printf("Qual Sua Idade : \n");
    scanf("%d", &idade);

    if (idade>=18)
    {
    printf("maior de idade");
    }
    else
    {
        printf("menor de idade");
    }
    return 0;
}