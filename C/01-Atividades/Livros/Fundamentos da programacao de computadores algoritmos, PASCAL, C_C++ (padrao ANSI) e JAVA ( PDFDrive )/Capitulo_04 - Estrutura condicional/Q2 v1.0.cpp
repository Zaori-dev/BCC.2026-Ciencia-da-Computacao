#include <stdio.h>

int main()
{

    float n1, n2, n3, m, nex;

    printf("Digite Suas Tres Notas:\n ");

    scanf("%f %f %f" , &n1, &n2, &n3);

    
    m = (n1 + n2 + n3) / 3;
    printf("A Media e : %.2f\n", m);


    if (m >= 0 && m < 3)
    {
       printf("Reprovado");
    }

 else if (m >= 3 && m < 7)
    {
        printf("Exame");
        nex = 12 - m;
        printf("Deve tira %.2f\n para ser Aprovado", nex);
    }

 else if (m >= 7 && m < 10)
    {
        printf("Aprovado");
    }

return 0; 

}