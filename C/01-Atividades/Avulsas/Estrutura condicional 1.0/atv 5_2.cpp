// Desafio Avançado: O Teste do Piloto v2.0
// 
// Um candidato só pode fazer a prova prática se cumprir dois requisitos:
// 1. Ter passado na prova teórica (Nota de 0 a 10, sendo a nota mínima 7.0).
// 2. Ter completado pelo menos 20 aulas práticas no sistema.
// 
// Seu desafio:
// - Use uma variável para o número de aulas (int aulas).
// - Use uma variável decimal para a nota da prova (float nota_teorica).
// - Peça primeiro a nota da prova. Se for maior ou igual a 7.0, peça as aulas.

#include<stdio.h>

int main()
{
    int prova;
    float n;
    int aulas;
    
    printf("VC fez a Prova teórica?\n se S/1 se N/0\n");
    scanf("%d", &prova);
    
    if (prova==1)
    {
        printf("Qual sua nota(0 a 10):\n");
        scanf("%f", &n);
        if (n>=7.0)
        {
            printf("Completou Quantas Aulas: \n");
            scanf("%d", &aulas);
            if (aulas>=20)
            {
                printf("Pode fazer a Prova pratica");
            }
            else
            {
                printf("Reprovado");
            }
        }
        else
        {
            printf("Reprovado");
        }
    }
    else
    {
        printf("Reprovado");
    }
    
    
    return 0;
}