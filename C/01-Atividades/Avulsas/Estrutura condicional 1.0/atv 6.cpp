//Questão 6
//Se a temperatura estiver acima de 30 graus, mostrar:
//Muito quente
//Caso contrário, o programa não precisa fazer nada.
//Qual estrutura você usaria?

#include<stdio.h>
int main()
{
    float temp;

    printf("Qual a temperatura: \n");
scanf("%f", &temp);

    if (temp>30)
    {
        printf("Muito quente");
    }
    //else
    //{
    //    printf("Temperatura normal");
    //}

    return 0;
}