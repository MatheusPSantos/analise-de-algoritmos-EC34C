// Matheus Pereira
#include <stdio.h>
#include <math.h>

#define UmS 1000000
#define UmM 60000000

double logBase(int a, int b) {
    double lg;
    lg = log10(a) / log10(b);

    return lg;
}

unsigned int fatorial(int num) {
    if(num == 0)
        return 1;
    else
        return num * fatorial(num - 1);
}

int main() {

    int n = 1;

    while( n * logBase(n, 2)< UmS) {
        n++;
    }
    printf("n lg n => 1 seg >>> %d\n", n-1);
    n = 1;
    while( n * logBase(n, 2)< UmM) {
        n++;
    }
    printf("n lg n => 1 min >>> %d\n", n-1);

    printf("-----------\n");

    n = 1;
    while(pow(n, 2) < UmS)
        n++;
    printf("n^2 => 1 seg >>> %d\n", n-1);
    n = 1;
    while(pow(n, 2) < UmM)
        n++;
    printf("n^2 => 1 min >>> %d\n", n-1);

    printf("-----------\n");

    n = 1;
    while(pow(n, 3) < UmS)
        n++;
    printf("n^3 => 1 seg >>> %d\n", n-1);
    n = 1;
    while(pow(n, 3) < UmM)
        n++;
    printf("n^3 => 1 min >>> %d\n", n-1);

    printf("-----------\n");
    n = 1;
    while(pow(2, n) < UmS)
        n++;
    printf("2^n => 1 seg >>> %d\n", n-1);
    n = 1;
    while(pow(2, n) < UmM)
        n++;
    printf("2^n => 1 min >>> %d\n", n-1);

    printf("-----------\n");
    n = 1;
    while(fatorial(n) < UmS)
        n++;
    printf("n! => 1 seg >>> %d\n", n-1);
    n = 1;
    while(fatorial(n) < UmM)
        n++;
    printf("n! => 1 min >>> %d\n", n-1);

    printf("-----------\n");
}
