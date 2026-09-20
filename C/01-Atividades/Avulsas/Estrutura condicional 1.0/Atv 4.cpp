//Questao 4
//
//Leia dois números e informe qual deles é maior. 
//Se forem iguais, informe que são iguais.
//
//Monte somente a árvore lógica:
//
//A > B?
//    SIM →
//    NÃO →
//Depois continue a partir do NÃO.

#include <stdio.h>

int main()
{
    float n1,n2;
    
    printf("Digite dois Numeros: \n");
    scanf("%f %f", &n1,&n2);
    
 
    
    if (n1>n2)
    {
        printf(" Maior e: %.2f\n",n1);
    }
    
    else
    { 
        if (n1==n2)
        {
            printf("Sao Iguais : %.2f %.2f",n1,n2);
        }
        else
        {
            printf("Maior e : %.2f",n2);
        }
    } 
    
    return 0;
}