#include <stdio.h>

void insertionSort(int* Array, int sizeArray) {
    int j, i, key;

    for(j = 1; j < sizeArray; j++) {
        key = Array[j];
        i = j -1;

        while(i > 0 & Array[i] > key) {
            i = i -1;
        }

        Array[i+1] = key;
    }
}

void main() {
    printf("===== Insertion Sort ======\n ");
    int i, n = 5;
    int vet[5] = {3,8,9,34,1};
    for(i = 0; i < n; i++)
        printf(" <<< %d \t", vet[i]);
    printf("\n");

    insertionSort(vet, n);

    for(i = 0; i < n; i++)
        printf(" >>> %d \t", vet[i]);
    printf("\n");
}