#include <stdio.h>

int main() 
{

    char nome[50];
    char sexo;
    int idade;
    float altura, peso, imc;


    printf("Digite o nome: ");
    scanf("%s[50]", nome);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%f", &peso);

     
    imc = peso / (altura * altura);

    // Saída de dados
    printf("\n--- RESULTADO ---\n");
    printf("Nome: %s\n", nome);
    printf("Sexo: %c\n", sexo);
    printf("Idade: %d\n", idade);
    printf("IMC: %.2f\n", imc);
    printf("Classificacao: ");

     
    if (imc < 16.0) 
    {
        printf("Subpeso Severo\n");
    } 
    else if (imc <= 19.9) 
    {
        printf("Subpeso\n");
    } 
    else if (imc <= 24.9) 
    {
        printf("Normal\n");
    } 
    else if (imc <= 29.9) 
    {
        printf("Sobrepeso\n");
    } 
    else if (imc <= 39.9) 
    {
        printf("Obeso\n");
    } 
    else 
    {
        printf("Obeso Morbido\n");
    }

    return 0;
}