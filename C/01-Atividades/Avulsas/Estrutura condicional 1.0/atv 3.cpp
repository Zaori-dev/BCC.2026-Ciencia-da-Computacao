//Questão 3
//Um aluno possui duas notas.
//O programa deve calcular a média.
//média >= 7: aprovado
//média >= 4 e menor que 7: recuperação
//média < 4: reprovado

#include<stdio.h>

int main()
{
    float n1,n2,m;
    
    printf("Digite Suas Duas Notas\n");
    scanf("%f %f", &n1,&n2);
    
    m = (n1+n2)/2;
    
    if(m >= 7)
    {
        printf("Aprovado %.2f", m);
    }
    else if (m >= 4)
    {
        printf("Recuperacao %.2f",m);
    }
    else
    {
        printf("Reprovado %.2f",m);
    }
    
    return 0;
}