#include <stdio.h>
#include <stdlib.h>

void imprimeMaximoAtividades(int* inicio, int* fim, int n);


int main() {
    int ini[11] = {1, 3, 0, 5, 3, 5, 6, 8, 8, 2, 12};
    int fim[11] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    imprimeMaximoAtividades(ini, fim, 11);
    return 0;
}

void imprimeMaximoAtividades(int* inicio, int* fim, int n) {
    int i = 0, j;
    printf("%d\n", i);

    for(j = 1; j < n-1; j++) {
        if(inicio[j] >= fim[i]) {
            printf("%d", j);
            i = j;
        }
    }
}
