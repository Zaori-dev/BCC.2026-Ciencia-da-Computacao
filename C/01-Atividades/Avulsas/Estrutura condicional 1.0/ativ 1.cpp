//Questão 1
//Um programa recebe a idade de uma pessoa e deve informar 
//se ela é maior ou menor de idade.
//Descubra:
//Qual é a entrada?
//Qual pergunta o programa precisa fazer?
//Quais são as duas possíveis saídas?

#include<stdio.h>

int main ()
{
    int idade;

    printf("Digite Sua Idade: \n");
    scanf ("%d", &idade);
    
    if (idade >= 18)
    {
        printf("Maior de Idade");
    }
    else
    {
        printf("Menor de Idade");
    }
    
    return 0;
}