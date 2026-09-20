#include <stdio.h>

int main()
{
  int i;
  float a, b, c;

  printf("Digite o Valor de A B C em Sequencia\n");
  scanf("%f %f %f", &a, &b, &c);

  printf("Digite o valor de I = Entre 1, 2 e 3:\n");
  scanf("%d", &i);

  // CASO 1: Ordem Crescente
  if (i == 1)
  {
    if (a < b && a < c)
    {
      if (b < c)
      {
        printf("A ordem Crescente e: %.2f %.2f %.2f\n", a, b, c);
      }
      else
      {
        printf("A ordem Crescente e: %.2f %.2f %.2f\n", a, c, b);
      }
    }
    else if (b < a && b < c)
    {
      if (a < c)
      {
        printf("A ordem Crescente e: %.2f %.2f %.2f\n", b, a, c);
      }
      else
      {
        printf("A ordem Crescente e: %.2f %.2f %.2f\n", b, c, a);
      }
    }
    else
    {
      if (a < b)
      {
        printf("A ordem Crescente e: %.2f %.2f %.2f\n", c, a, b);
      }
      else
      {
        printf("A ordem Crescente e: %.2f %.2f %.2f\n", c, b, a);
      }
    }
  }
  // CASO 2: Ordem Decrescente
  else if (i == 2)
  {
    if (a > b && a > c)
    {
      if (b > c)
      {
        printf("A ordem Decrescente e: %.2f %.2f %.2f\n", a, b, c);
      }
      else
      {
        printf("A ordem Decrescente e: %.2f %.2f %.2f\n", a, c, b);
      }
    }
    else if (b > a && b > c)
    {
      if (a > c)
      {
        printf("A ordem Decrescente e: %.2f %.2f %.2f\n", b, a, c);
      }
      else
      {
        printf("A ordem Decrescente e: %.2f %.2f %.2f\n", b, c, a);
      }
    }
    else
    {
      if (a > b)
      {
        printf("A ordem Decrescente e: %.2f %.2f %.2f\n", c, a, b);
      }
      else
      {
        printf("A ordem Decrescente e: %.2f %.2f %.2f\n", c, b, a);
      }
    }
  }
  // CASO 3: Maior valor no meio
  else if (i == 3)
  {
    if (a > b && a > c)
    {
      if (b > c)
      {
        printf("A ordem Desejada e: %.2f %.2f %.2f\n", b, a, c);
      }
      else
      {
        printf("A ordem Desejada e: %.2f %.2f %.2f\n", c, a, b);
      }
    }
    else if (b > a && b > c)
    {
      if (a > c)
      {
        printf("A ordem Desejada e: %.2f %.2f %.2f\n", a, b, c);
      }
      else
      {
        printf("A ordem Desejada e: %.2f %.2f %.2f\n", c, b, a);
      }
    }
    else if (c > a && c > b)
    {
      if (a > b)
      {
        printf("A ordem Desejada e: %.2f %.2f %.2f\n", b, c, a);
      }
      else
      {
        printf("A ordem Desejada e: %.2f %.2f %.2f\n", a, c, b);
      }
    }
  }

  return 0;
}