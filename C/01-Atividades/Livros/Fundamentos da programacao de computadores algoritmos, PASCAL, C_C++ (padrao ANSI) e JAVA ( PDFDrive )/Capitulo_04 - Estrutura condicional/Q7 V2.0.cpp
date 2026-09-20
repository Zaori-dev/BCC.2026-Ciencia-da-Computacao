#include <stdio.h>

int main()
{

  float a, b, c;
  float maior, meio, menor;
  int i;

  printf("Digite um Valor para A,B e C en sequencia:\n");
  scanf("%f %f %f", &a, &b, &c);

  printf("Digite um valor para I Entre 1,2 e 3:\n");
  scanf("%d", &i);

  if (a < b && a < c)
  {
    // ENTÃO SE
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
    menor = b;
    if (a < c)
    {
      meio = a;
      maior = c;
    }
    else
    {
      meio = c;
      maior = a;
    }
  }

  else
  {
    menor = c;
    if (a < b)
    {
      meio = a;
      maior = b;
    }
    else
    {
      meio = b;
      maior = a;
    }
  }

  if (i == 1)
  {
    printf("A ordem crescente e: %.2f %.2f %.2f\n", menor, meio, maior);
  }
  else if (i == 2)
  {
    printf("A ordem decrescente e: %.2f %.2f %.2f\n", maior, meio, menor);
  }
  else if (i == 3)
  {
    printf("A ordem desejada e: %.2f %.2f %.2f\n", menor, maior, meio);
  }
  else
  {
    printf("Opcao de I Erro!\n");
  }

  return 0;
}