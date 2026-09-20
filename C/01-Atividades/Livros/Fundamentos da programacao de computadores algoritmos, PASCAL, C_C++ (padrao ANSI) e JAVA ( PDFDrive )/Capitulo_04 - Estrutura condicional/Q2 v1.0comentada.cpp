#include <stdio.h>

int main()
{

    //n1,n2,n3 = notas do aluno
    //m = media do aluno
    //nex = nota do exame caso o aluno tenha que fazer exame
    //float= variavel de ponto flutuante, ou seja, numeros com casas decimais ex: 1.5.
    //%f
    //int= variavel de numeros inteiros, ou seja, numeros sem casas decimais ex: 1,2,3,4,5,6,7,8,9,10
    //%d
    //double= variavel de ponto flutuante, ou seja, numeros com casas decimais
    //%lf
    //ex: 1.5, porem com maior precisao que o float.
    //char= variavel de caractere, ou seja, letras, numeros e simbolos
    //%c
    //ex: a,b,c,0,1,2,3,4,5,6,7,8,9,!@#$%^&*()_+-=~`[]{}|;:'",.<>?/
    //char nome[50]; // Armazena um nome de até 49 caracteres
    //%s

      // Atividade 2 - Calcular a média de 3 notas e verificar se o aluno foi aprovado,
    // reprovado ou se precisa fazer exame.
    //DECLARE nota1, nota2, nota3, media, nota_exame NUMÉRICO

  float n1, n2, n3, m, nex;

    //ESCREVA “Digite as tres notas: “
  printf("Digite Suas Tres Notas:\n ");

  //LEIA nota1, nota2, nota3
  scanf("%f %f %f" , &n1, &n2, &n3);
  
  //media ← (nota1 + nota2 + nota3) / 3
  //calcule e mostre a média aritmética ex: n1+n2+n3/3  n1+n2+n3+n4+ n5/5
  m = (n1 + n2 + n3) / 3;

    //ESCREVA “Média aritmética: “,media
  printf("A Media e : %.2f\n", m);


    //SE media >= 0 E media < 3
  if (m >= 0 && m < 3)
  {
    //ENTÃO ESCREVA “Reprovado”
    printf("Reprovado");
  } 

  //SE media >= 3 E media < 7
  if (m >= 3 && m < 7)
  {
    //ENTÃO ESCREVA “Reprovado”
    printf("Exame");
      //nota_exame ← 12 - media  em portugol  (←) e significa recebe
    // seta vira o sinal de igual: (=) e significa atribuição
    nex = 12 - m;
    //ESCREVA “Deve tirar nota”, nota_exame, “para ser aprovado”
    printf("Deve tira %.2f\n para ser Aprovado", nex);
  }

   //SE media >= 7 E media < 10
  if (m >= 7 && m < 10)
  {
    //ENTÃO ESCREVA “Aprovado”
    printf("Aprovado");
  }

  

return 0;

}