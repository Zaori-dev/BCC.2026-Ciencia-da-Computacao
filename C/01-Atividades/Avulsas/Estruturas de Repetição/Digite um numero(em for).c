#include<stdio.h>
int main()
{
    int n,i;
    
    
    printf("Digite um numero:\n");
    scanf("%d",&i);
    
    for (n=i;n>=1;n--)
    {
        printf("\n%d\n",n);
    }
    
    return 0;
}