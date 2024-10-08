#include <stdio.h>

int divisiveis(int array[], int tamanho, int x){
    if(tamanho == 0){
        return 0;
    }else{
        int resto = array[tamanho - 1] % x;
        if(resto == 0){
            return 1 + divisiveis(array, tamanho - 1, x);
        }else{
            return divisiveis(array, tamanho - 1, x);
        }
    }
}

void exibe_array(int array[], int tamanho){
    printf("[");
    for(int i = 0; i < tamanho; i++){
        if(array[i] != array[tamanho - 1]){
            printf("%d, ", array[i]);
        }else{
            printf("%d", array[i]);
        }   
    }
    printf("]\n");
}

int main(){
    int array[] = {3, 6, 9, 12};
    int tamanho = sizeof(array)/sizeof(array[0]);
    exibe_array(array, tamanho);
    int x;
    printf("Informe o valor de x: ");
    scanf("%d", &x);
    if(divisiveis(array, tamanho, x) == 0){
        printf("Nenhum elemento do array é divisível por %d.\n", x);
    }else{
        printf("Quantidade de elementos do array divisíveis por %d: %d elementos.\n", x, divisiveis(array, tamanho, x));
    }
    return 0;

}