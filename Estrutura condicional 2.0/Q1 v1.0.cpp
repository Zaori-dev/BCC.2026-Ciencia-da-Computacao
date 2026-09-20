// Questao 1 — Salario de funcionario
// 
// Uma empresa calcula o salario final de um funcionario de acordo com seu salario atual e seu tempo de servico.
// 
// Facao um programa que receba:
// - salario atual;
// - quantidade de anos trabalhados na empresa.
// 
// O funcionario recebe um aumento de acordo com estas regras:
// - menos de 2 anos: aumento de 5%;
// - de 2 ate 5 anos: aumento de 10%;
// - de 6 ate 10 anos: aumento de 15%;
// - mais de 10 anos: aumento de 20%.
// 
// Alem disso, se depois do aumento o salario ficar abaixo de R$ 2.000,00, o funcionario recebe um bonus adicional de R$ 200,00.
// 
// O programa deve mostrar:
// - salario original;
// - percentual de aumento recebido;
// - valor do aumento;
// - se recebeu ou não o bonus;
// - salario final.

#include<stdio.h>

int main()
{    
    
    //sa= Salario Atual, alment = Valor de almento 
    //sf= Salario Final, a= Anos de Trabalho na Empresa. 
    // porc = porcentagem
    float sa,sf,almento;
    //float porc
    int a;
    
    printf("Salario Atual:\n");
    scanf("%f", &sa);
    
    printf("Quantos Anos de Empresa:\n");
    scanf("%d", &a);
    
    if (a<2)
    {
        almento = sa * 5/100;
        sf = sa + almento;
        if(sf<2000.00)
        {
            sf = sf + 200.00;
            printf("Salario Atual:\n R$%.2f", sa);
            printf("\nporcentual de almento 5%\n");
            printf("\nValor do almento:\n R$%.2f", almento);
            printf("\nRecebe ou nao Bonus:\n SIM - R$200.00\n");
            printf("\nNovo Salario:\n R$%.2f", sf);
        }
        else
        {
           
            printf("\nSalario Atual:\n R$%.2f", sa);
            printf("\n porcentual de almento 5%\n");
            printf("\nValor do almento:\n R$%.2f", almento);
            printf("\nRecebe ou nao Bonus:\n Nao");
            printf("\nNovo Salario:\n R$%.2f", sf);
        }
    }
    else if (a>=2 && a<=5)
    {
        almento = sa * 10/100;
        sf = sa + almento;
        if(sf<2000.00)
        {
            sf = sf + 200.00;
            printf("Salario Atual:\n R$%.2f", sa);
            printf("\nporcentual de almento 10%\n");
            printf("\nValor do almento:\n R$%.2f", almento);
            printf("\nRecebe ou nao Bonus:\n SIM - R$200.00\n");
            printf("\nNovo Salario:\n R$%.2f", sf);
        }
        else
        {
           
            printf("\nSalario Atual:\n R$%.2f", sa);
            printf("\n porcentual de almento 10%\n");
            printf("\nValor do almento:\n R$%.2f", almento);
            printf("\nRecebe ou nao Bonus:\n Nao");
            printf("\nNovo Salario:\n R$%.2f", sf);
        }
    }
    else if (a>=6 && a<=10)
    {
        almento = sa * 15/100;
        sf = sa + almento;
        if(sf<2000.00)
        {
            sf = sf + 200.00;
            printf("Salario Atual:\n R$%.2f", sa);
            printf("\nporcentual de almento 15%\n");
            printf("\nValor do almento:\n R$%.2f", almento);
            printf("\nRecebe ou nao Bonus:\n SIM - R$200.00\n");
            printf("\nNovo Salario:\n R$%.2f", sf);
        }
        else
        {
           
            printf("\nSalario Atual:\n R$%.2f", sa);
            printf("\n porcentual de almento 15%\n");
            printf("\nValor do almento:\n R$%.2f", almento);
            printf("\nRecebe ou nao Bonus:\n Nao");
            printf("\nNovo Salario:\n R$%.2f", sf);
        }
    }
    else if (a>10)
    {
        almento = sa * 20/100;
        sf = sa + almento;
        if(sf<2000.00)
        {
            sf = sf + 200.00;
            printf("Salario Atual:\n R$%.2f", sa);
            printf("\nporcentual de almento 20%\n");
            printf("\nValor do almento:\n R$%.2f", almento);
            printf("\nRecebe ou nao Bonus:\n SIM - R$200.00\n");
            printf("\nNovo Salario:\n R$%.2f", sf);
        }
        else
        {
           
            printf("\nSalario Atual:\n R$%.2f", sa);
            printf("\n porcentual de almento 20%\n");
            printf("\nValor do almento:\n R$%.2f", almento);
            printf("\nRecebe ou nao Bonus:\n Nao");
            printf("\nNovo Salario:\n R$%.2f", sf);
        }
    }

    
    return 0;
}