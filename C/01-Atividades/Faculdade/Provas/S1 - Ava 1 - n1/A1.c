#include<stdio.h>
int main()
{
    float n1_a,n1_b,n2_a,n2_b,n1,n2,mp,nr,mf;
    printf("Digite as notas da Etapa 1:\n");
    scanf("%f %f", &n1_a,&n1_b);
    printf("Digite as notas da Etapa 2: \n");
    scanf("%f %f", &n2_a,&n2_b);
    
    n1 = (n1_a+n1_b)/2;
    n2 = (n2_a+n2_b)/2;
    
    mp = ((n1*2)+(n2*3))/5;
    printf("A media e: %.2f\n",mp);
    
    if (mp>7)
    {
       printf("Aprovado");
    }
    else if (mp<3)
    {
        printf("Reprovado:");
    }
    else
    {
       printf("Recuperacao:");
       printf("Digite a nota da Recuperacao:\n");
       scanf("%f", &nr);
       
       mf = (mp+nr)/2;
       
       if (mf>=5)
       {
           printf("Aprovado: %.2f\n",mf);
       }
       else
       {
           printf("Reprovado: %.2f\n",mf);
       }
    }
  
    return 0;
}