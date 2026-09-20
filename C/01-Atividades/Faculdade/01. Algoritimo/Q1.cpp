//Leia uma nota. Se a nota for maior ou igual a 7, mostre “Aprovado”. 
//Caso contrário, mostre “Reprovado”.


#include<stdio.h>

int main()
{
    float nt;

    printf("Digite Sua Nota:\n");
    scanf("%f",&nt);

        if (nt >= 7)
        {
        printf("Aprovado");
        }
        else
        {
            printf("Reprovado");
        }

    return 0;
}