#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void diferenca(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("Diferença entre os vetores A e B: {");
    for (int i = 0; i < tamanhoA; i++) {
        int j;
        for (j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                break;
            }
        }
        if (j == tamanhoB) { 
            printf("%d", A[i]);
            if (i < tamanhoA - 1) { 
                printf(", ");
            }
        }
    }
    printf("}\n");
}

int main() {
    int tamanhoA, tamanhoB;

    printf("Digite os elementos do vetor A (digite -1 para terminar):\n");
    int* A = (int*)malloc(sizeof(int));
    int num;
    tamanhoA = 0;
    while (true) {
        scanf("%d", &num);
        if (num == -1)
            break;
        A = (int*)realloc(A, (tamanhoA + 1) * sizeof(int));
        A[tamanhoA] = num;
        tamanhoA++;
    }

    printf("Digite os elementos do vetor B (digite -1 para terminar):\n");
    int* B = (int*)malloc(sizeof(int));
    tamanhoB = 0;
    while (true) {
        scanf("%d", &num);
        if (num == -1)
            break;
        B = (int*)realloc(B, (tamanhoB + 1) * sizeof(int));
        B[tamanhoB] = num;
        tamanhoB++;
    }

    diferenca(A, tamanhoA, B, tamanhoB);

    free(A);
    free(B);

    return 0;
}