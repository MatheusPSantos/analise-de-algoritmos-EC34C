#include <stdio.h>
#include <math.h>
/// Matheus Pereira dos Santos

int main() {

    /**
        Exerc�cio 1: A partir de qual valor de n o algoritmo 2 passa a ser melhor que o algoritmo 1?
        Algoritmo 1:  f1(n) = 2n2 + 5n opera��es
        Algoritmo 2:  f2(n) = 500n + 4000 opera��es
    */

    int n = 1;

    while((2*(pow(n, 2)) + (5*n)) <= ((500*n)+(4000)))
        n++;

    printf("\n----------\nEXERCICIO 1:\n--------------\n");
    printf("Quando n = %d o algoritmo 2 passa a ser melhor que o algoritmo 1.\n", (n));


    /**
        Exerc�cio 2: A partir de qual valor de n o algoritmo 2 passa a ser melhor que o algoritmo 1?
        Algoritmo 1:  f1(n) = 2n3 + 2n opera��es
        Algoritmo 2:  f2(n) = 50000n + 600000 opera��es
    **/
    int p = 1;

    while(((2*pow(p,3)) + (2*p)) <= ((50000*p) + (600000)))
        p++;

    printf("\n----------\nEXERCICIO 2:\n--------------\n");
    printf("Quando n = %d o algoritmo 2 passa a ser melhor que o algoritmo 1.\n", (p));

    return 0;
}
