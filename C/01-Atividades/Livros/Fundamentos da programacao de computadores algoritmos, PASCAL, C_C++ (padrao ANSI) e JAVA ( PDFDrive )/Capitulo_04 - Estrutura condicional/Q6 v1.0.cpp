#include <stdio.h>

int main()
{
    int n,r;
    printf("Digite um numero:\n");
    scanf("%d", &n);

    //r ← RESTO(num/2) Para pegar o resto da divisão em C, 
    //utiliza-se o operador % (módulo). Exemplo: n % 2.
    // (*)mutiplica,(/) Divide, (%) Resto  
    r = (n % 2);
    
    if(r == 0)
    {
        printf("O numero e par.\n");
    }
    else
    {
        printf("O numero e impar.\n"); 
    }      


return 0;
}