#include <stdio.h>

int Fatorial(int n) {
    if(n == 0)
        return 1;
    return n * Fatorial(n-1);
}

int main() {
    int b;
    printf("Calculo do fatorial.\nInsira um valor maior que 0 >>> ");
    scanf("%d", &b);
    int f = Fatorial(b);
    printf("%d! = %d\n", b, f);
    return 0;
}
