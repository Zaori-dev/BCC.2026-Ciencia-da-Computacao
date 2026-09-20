#include <stdio.h>

int main()
{
  //Atividade 3 Faça um programa que receba dois números e mostre o maior

  //DECLARE num1, num2 NUMÉRICO
  float n1, n2;

  //ESCREVA “Digite o primeiro número: “
  printf("Digite dois Numeros: ");

    
  //LEIA n1, n2
  scanf ("%f %f", &n1,&n2);

    //SE n1 > n2
  if (n1 > n2)
  {
    //ENTaO ESCREVA O maior numero e: , num1
    printf("O maior numero e : %.2f\n", n1);
  }

  //SE num2 > num1
  if (n2 > n1)
  {
    //ENTaO ESCREVA O maior numero e: , num2
    printf("o Maior numero e : %.2f\n", n2);
  }

  //SE num1 = num2
  if (n1 == n2)
  {
    //ENTaO ESCREVA Os numeros sao iguais
    printf ("Os numeros sao iguais\n");
  }

 return 0;
}