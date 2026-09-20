//Questão 5
//Uma pessoa pode entrar em um evento somente se:
//tiver 18 anos ou mais;
//possuir ingresso.

#include<stdio.h>

int main()
{
    int id,ing;
    
    printf("Digite sua Idade:\n");
    scanf("%d", &id);
    
    
    
    if (id >= 18)
    {
        printf("Vc tem quantos Ingressos?");
        scanf("%d", &ing);
        if (ing >= 1)
        {
            printf("Pode Entra");
                   
        }
        else if (ing <= 0)
        {
            printf("Nao pode Entra");
        }
    }
    else
    {
        printf("menor de idade ");
    }
    
    return 0;
    
}
        