#include<stdio.h>

int main()
{

    float NT,NS,NF,M;

    printf("Digite Suas notas Do S1:\n");
    scanf("%f %f %f", &NT,&NS,&NF);

    // Calcula a media das notas digitadas
    //Dividindo no c e (/) e mutiplica e (*)
    M = (NT * 2 + NS * 3 + NF * 5)/10;

    printf("Amedia e : %.2f\n", M);


 if (M >= 8 && M < 10)
    {
        printf("Obteve Conceito A");
    }

    if (M >= 7 && M < 8)
    {
        printf("Obteve Conceito B");
    }

 if (M >= 6 && M < 7)
    {
        printf("Obteve Conceito C");
    }

 if (M >= 5 && M < 6)
    {
        printf("Obteve Conceito D");
    }

 if (M >= 0 && M < 5)
    {
        printf("Obteve Conceito E");
    }

return 0;

}