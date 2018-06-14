#include <stdio.h>
#include<stdlib.h>

int* fib_bottom_UP(int n) {
    int store[n];
    store[0] = 1;
    store[1] = 1;
    int i;
    for(i = 2; i < n; i++)
        store[i] = store[i - 1]+store[i - 2];
    return store[n];
}

int main() {
    printf("Calculo da sequencia do numero de fibonacci ate ... \n>>>");
    int num;
    scanf("%d", &num);
    int vetor[num];
    vetor = fib_bottom_UP(num);
    int i;
    for(i = 0; i<num; i++)
        printf("%d  ", vetor[i]);
    printf("\n");

    return 0;
}
