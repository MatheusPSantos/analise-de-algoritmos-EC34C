/// Matheus Pereira dos Santos

#include <stdio.h>
#include <math.h>

int main() {
    int c, n = 220;
    c = 0;

    while(((2*pow(n,2) + (2*n))) >= ((5*n)+ c))
        c++;

    printf("EXERCICIO B04-03:\n-------------------\n");
    printf("Para C = %d o segundo algoritmo se torna menos eficiente.\n\n", c);

    return 0;
}
