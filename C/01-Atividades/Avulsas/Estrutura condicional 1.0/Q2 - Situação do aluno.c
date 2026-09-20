#include<stdio.h>

int main()
{
    float n1,n2,m;
    
    printf("Digite a nota 1 e a nota 2\n");
    scanf("%f %f", &n1,&n2);
    
    m = (n1+n2)/2;
    
    if (m<5)
    {
        printf("\n Reprovado :Media %.2f\n", m);
    }
    else if (m >= 5 && m < 7)
    {
        printf("\n Recuperacao :Media %.2f\n", m);
    }
    else if (m >= 7)
    {
        printf("\n aprovado :Media %.2f\n", m);
    }
    
    
    
    return 0;
}