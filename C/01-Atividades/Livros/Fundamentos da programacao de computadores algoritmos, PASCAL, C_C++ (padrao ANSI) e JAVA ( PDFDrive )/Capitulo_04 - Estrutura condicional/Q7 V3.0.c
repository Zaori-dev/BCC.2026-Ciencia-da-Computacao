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

  if(a>=b && a>=c)
  {
    maior = a;
  }
  else if (b>=a && b>=c)
  {
    maior = b;
  }
  else
  {
    maior = c;
  }

  if(a<=b && a<+c)
  {
    menor = a;
  }
  else if (b<=a && b<=c)
  {
    menor = b;
  }
  else
  {
    menor = c;
  }

  meio = (a+b+c) - maior - menor;

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