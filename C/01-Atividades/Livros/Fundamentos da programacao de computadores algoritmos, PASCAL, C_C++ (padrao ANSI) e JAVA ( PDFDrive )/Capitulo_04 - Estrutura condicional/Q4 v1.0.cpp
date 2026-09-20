//Atividade 4 - Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
//digitará três números diferentes.

#include <stdio.h>
int main()
{

   //DECLARE num1, num2, num3 NUMÉRICO
   float n1, n2, n3;

   //ESCREVA “Digite os três números: “
   printf("Digite tres numeros:\n ");

   //LEIA n1,n2,n3
   scanf("%f %f %f", &n1, &n2, &n3);

   //SE num1 < num2 E num1 < num3 bloco 1

   if (n1 < n2 && n1 < n3)
   {
      //ENTÃO SE num2 < num3
      if (n2 < n3)
      {
         //ENTÃO ESCREVA “A ordem crescente é: “,num1,“-”,num2,“-”,num3
         printf("A ordem Crescente e: %.2f %.2f %.2f\n", n1, n2, n3);
      }
      else
      {
         //SENÃO ESCREVA “A ordem crescente é: “,num1,“-”,num3,“-”,num2
         printf("A ordem Crescente e: %.2f %.2f %.2f\n", n1, n3, n2);
      }
   }

   //SE num2 < num1 E num2 < num3 bloco 2
   else if (n2 < n1 && n2 < n3)
   {
      //ENTÃO SE num1 < num3
      if (n1 < n3)
      {
         //ENTÃO ESCREVA “A ordem crescente é: “,num2,“-”,num1,“-”,num3
         printf("A ordem Crescente e: %.2f %.2f %.2f\n", n2, n1, n3);
      }
      else
      {
         //SENÃO ESCREVA “A ordem crescente é: “,num2,“-”,num3,“-”,num1
         printf("A ordem Crescente e: %.2f %.2f %.2f\n", n2, n3, n1);
      }
   } 
   
   // Bloco 3: Se não for o n1 e nem o n2, só sobrou o n3 ser o menor!
   else
   {
      //ENTÃO SE num1 < n2
      if (n1 < n2)
      {
        //ENTÃO ESCREVA “A ordem crescente é: “,num3,“-”,num1,“-”,num2
        printf("A ordem Crescente e: %.2f %.2f %.2f\n", n3, n1, n2);
      }
      else
      {
         //SENÃO ESCREVA “A ordem crescente é: “,num3,“-”,num2,“-”,num1
         printf("A ordem Crescente e: %.2f %.2f %.2f\n", n3, n2, n1);
      }
   }

   return 0;
}