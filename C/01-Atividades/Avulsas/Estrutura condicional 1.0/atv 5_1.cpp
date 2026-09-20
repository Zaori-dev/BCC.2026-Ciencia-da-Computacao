 //Questão de Treino: O Teste do PilotoUm candidato só pode 
 //fazer a prova prática de direção na autoescola se cumprir duas condições:
 //Ter passado na prova teórica.Ter completado 
 //pelo menos 20 aulas práticas no sistema.
 //Seu desafio:Use uma variável para o número de aulas (ex: int aulas).
 //Use uma variável para o resultado da prova teórica, onde 1 significa 
 //que passou e 0 significa que reprovou (ex: int passou_teorica).
 
 #include<stdio.h>
 
 int main()
 {
     int prova,aulas;
     
     printf("Vc passou na Prova teorica\n(se S/1 se N/0)");
     scanf("%d", &prova);
     
     if (prova==1)
     {
         printf("Quantas Aulas Completas : \n");
         scanf("%d", &aulas);
         
         if (aulas>=20)
         {
            printf("Pode Fazer a Prova Pratica");
         }
         else
         {
             printf("Nao pode fazer a prova");
         }
     }
     else
     {
         printf("reprovado");
     }
     
     return 0;
 }