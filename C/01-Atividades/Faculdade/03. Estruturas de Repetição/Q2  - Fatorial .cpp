// Fatorial 
//(n!): Multiplica o número pelos seus antecessores até 1.
// Exemplo: 5! = 5 * 4 * 3 * 2 * 1 = 120
//5*4=20 
//20*3=60
//60*2=120
//120*1=120
// C = for (i = n; i >= 1; i--)

#include <stdio.h>
int main() {

    int n;
    int i;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        fatorial = fatorial * i;
    }

    printf("Fatorial de %d = %d\n", n, fatorial);

    return 0;
}

