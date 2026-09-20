// Questão 8
// 
// Um número pode ser:
// positivo
// negativo
// zero
// 
// Qual estrutura seria mais adequada?
// 
// Resposta: A estrutura mais adequada é o "if / else if / else".
// Explicação: Como as opções são exclusivas (um número não pode ser positivo 
// e negativo ao mesmo tempo), o "else if" garante que o computador só faça 
// a próxima pergunta se a anterior for falsa. Se não for positivo nem negativo, 
// o "else" final mata a charada confirmando que é zero.



// Questão 8
// 
// Um número pode ser:
// positivo
// negativo
// zero
// 
// Qual estrutura seria mais adequada?


#include<stdio.h>


int main()
{
    int n;
    
    printf("Digite um numero:\n");
    scanf("%d", &n);
    
if (n>0)
    {
        printf("positivo %d\n", n);
    }
  else if (n==0)
    {
        printf("Zero");
    }
 else
    {
        printf("Negativo :%d\n", n);
    }
    
    return 0;
}