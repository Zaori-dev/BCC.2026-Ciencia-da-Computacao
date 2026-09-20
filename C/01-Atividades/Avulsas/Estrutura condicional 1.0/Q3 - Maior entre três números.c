#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int maior, meio, menor;

    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
    {
        maior = n1;
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        maior = n2;
    }
    else
    {
        maior = n3;
    }

    if (n1 <= n2 && n1 <= n3)
    {
        menor = n1;
    }
    else if (n2 <= n1 && n2 <= n3)
    {
        menor = n2;
    }
    else
    {
        menor = n3;
    }

    meio = (n1 + n2 + n3) - maior - menor;

    printf("o Maior: %d\n o Meio: %d\n o Menor: %d\n", maior, meio, menor);

    return 0;
}