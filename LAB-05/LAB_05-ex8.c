#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// neste codigo tive dificuldade em encontrar uma maneira de fazer com que não fosse necessário perguntar ao usuário o tamanho do vetor,\
assim o usuário apenas teria que digitar os elementos do vetor. consegui utilizando as funcões malloc() e realloc(), elas reservam e armazenam memoria.\
elas aumentam o tamanho do vetor enquanto o usuário coloca mais elementos. 

void intersecao(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("Interseção dos vetores A e B: {");
    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                printf("%d", A[i]);
                if (i < tamanhoA - 1) {// o programa estava imprimindo os vetores com uma virgula seguindo o ultimo elemento. essa linha de codigo faz com\
                que isso nao aconteca, checando se é o ultimo elemento. as virgulas so sao usadas caso nao seja o ultimo elemento.
                    printf(", ");
                }
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

    intersecao(A, tamanhoA, B, tamanhoB);

    free(A);
    free(B);

    return 0;
}
