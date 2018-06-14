#include <stdio.h>

void bubbleSort(int* Array, int size) {
    int i, j, temp;

    for(i = 0; i < size; i++) {
        for(j = size; j > 0; j--) {
            if(Array[j] < Array[j-1]) {
                temp = Array[j];
                Array[j] = Array[j-1];
                Array[j-1] = temp;
            }
        }
    }
}

void main() {
    printf("==== Bubble Sort ==== \n");
    int vet[5] = {2,6,8,1,4}, i, j;
    printf("<<< ");
    for(i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    bubbleSort(vet, 5);
    
    printf(">>> ");
    for(i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

}