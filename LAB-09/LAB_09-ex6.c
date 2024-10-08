#include <stdio.h>

int buscaBinariaRecursiva(int array[], int inicio, int fim, int alvo) {
    if (inicio > fim) {
        return -1;
    }

    int meio = inicio + (fim - inicio) / 2;

    if (array[meio] == alvo) {
        return meio;
    } else if (array[meio] < alvo) {
        return buscaBinariaRecursiva(array, meio + 1, fim, alvo);
    } else {
        return buscaBinariaRecursiva(array, inicio, meio - 1, alvo);
    }
}

int main() {
    int array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int alvo = 11;

    int indice = buscaBinariaRecursiva(array, 0, tamanho - 1, alvo);

    if (indice != -1) {
        printf("Elemento encontrado na posição %d.\n", indice);
    } else {
        printf("Elemento não encontrado no array.\n");
    }

    return 0;
}
