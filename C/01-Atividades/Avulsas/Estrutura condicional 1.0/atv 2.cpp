//ati 2 
//Um programa recebe um número inteiro e deve informar se ele é positivo, negativo ou zero.
//Primeiro escreva a lógica em português.

#include<stdio.h>

int main()
{
    int n;
    
    printf("Digite um numero\n");
    scanf ("%d", &n);
    
    if (n >= 0)
    {
        printf ("\n E Positivo");
    }
    else if (n < 0)
    {
        printf("\n E Negativo");
    }
    
    return 0;
}