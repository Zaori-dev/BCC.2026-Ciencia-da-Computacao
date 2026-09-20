// Atividade 5 Faca um programa que receba tres numeros
// obrigatoriamente em ordem crescente e um quarto numero que nao siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente. Suponha
//que o usuario digitara quatro numeros diferentes.

#include <stdio.h>
int main()
{

   //DECLARE num1, num2, num3, num4 NUMÉRICO
   float n1, n2, n3, n4;

   //ESCREVA “Digite três números em ordem crescente: “
   printf ("Digite Tres numeros em ordem crescente:\n");

   //LEIA
   scanf("%f %f %f", &n1,&n2,&n3);

   if (n1<n2 && n2<n3)
      {
      printf ("Digite um numero quaquer\n");
      scanf ("%f", &n4);

      if(n4>n3)
      {
         printf ("A ordem decrescente e:%.2f %.2f %.2f %.2f\n", n4, n3, n2, n1);
      }

      else if (n4>n2)
      {
         printf ("A ordem decrescente e:%.2f %.2f %.2f %.2f\n", n3, n4, n2, n1);
      }

      else if (n4>n1)
      {
         printf ("A ordem decrescente e:%.2f %.2f %.2f %.2f\n", n3, n2, n4, n1);
      }
      else
      {
         printf ("A ordem decrescente e:%.2f %.2f %.2f %.2f\n", n3, n2, n1, n4);
      }
      }

      else 
      {
         printf("Erro!!!");
      }    

   return 0;
}