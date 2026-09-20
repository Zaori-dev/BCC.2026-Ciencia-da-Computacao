#include<stdio.h>

int main()
{
    float salario = 1000.00;
    float porcentual = 1.5;
    int ano = 2006;
    //int anoAtual;
    int  anoFinal = 2026;
    
    
    for (ano = 2006; ano <= anoFinal; ano++)
    {
        porcentual = porcentual * 2;
        salario = salario + (salario * porcentual / 100);

    }
    
    printf("Salario Atual :R$%f\n", salario);


    return 0;
}