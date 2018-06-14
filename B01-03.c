// Matheus Pereira dos Santos
#include <stdio.h>
#include <math.h>


double logBase(int a, int b) {
    double lg;
    lg = log10(a)/log10(b);
    return lg;
}

int main() {
    int n =1;
    while(8 * pow(n, 2) > 64 * n * logBase(n, 2))
        n++;
    printf("\na ordenação por intercalaca supera a ordenacao por insercao para n = %d \n", n+1);

    return 0;
}
