// Questão 2 — Situação completa de um aluno
// 
// Uma faculdade deseja determinar a situação de um aluno.
// 
// Faça um programa que receba:
// 
// nota da primeira prova;
// nota da segunda prova;
// nota do trabalho;
// quantidade de faltas.
// 
// Calcule:
// 
// media = (prova1 + prova2 + trabalho) / 3
// 
// A classificação por nota é:
// 
// média >= 7: aprovado;
// média >= 5 e menor que 7: recuperação;
// média menor que 5: reprovado.
// 
// Porém, existe outra regra:
// 
// Se o aluno possuir mais de 15 faltas, ele estará automaticamente reprovado por faltas, independentemente da média.
// 
// Mostre:
// 
// média;
// situação final.

#include<stdio.h>

int main()
{
    float notap1,notap2,notat,m;
    int faltas;
    
    printf("Digite a Nota da Primeira Prova:\n");
    scanf("%f", &notap1);
    printf("Digite a Nota da Segunda Prova:\n");
    scanf("%f", &notap2);
    printf("Digite a Nota do Trabalho:\n");
    scanf("%f", &notat);
    
    printf("quantidade de faltas:\n");
    scanf("%d", &faltas);
    
    m = (notap1+notap2+notat)/3;
    
    if (faltas>15)
    {
        printf("\n----////----\nReprovado Por Faltas");
        
    }
    else
    {
        if (m>=7)
        {
            printf("\n----////----\nAprovado - %.2f",m);
            
        }
       else if (m>=5 && m<7)
       {
            printf("\n----////----\nRecuperacao - %.2f",m);
           
       }
       else
       {
            printf("\n----////----\nReprovado - %.2f",m);
           
       }
    }
    
    
    return 0;
}