#include<stdio.h>
int main()
{
    int n;
    
    printf("Digite um numero:\n");
    scanf("%d", &n);
    
    if (n > 0)
    {
        printf("\nPositivo");
    }
    else if (n<0)
    {
        printf("\nNegativo");
    }
    else
    {
        printf("\nIgual a Zero");
    }
    
    return 0;
}