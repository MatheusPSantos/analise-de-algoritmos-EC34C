// Atividade B01-02
// matheus pereira dos santos
#include <stdio.h>
#include <math.h>

int main() {
    int n = 1;

    while(100*pow(n, 2) > pow(2, n)){
        n++;
    }

    printf("Para a entrada de tamanho %d a primeira execucao e mais rapida.\n", n);
    system("Pause");
    return 0;
}
