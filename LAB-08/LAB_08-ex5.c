#include <stdio.h>

float soma_array(float array[], int tamanho){
    if(tamanho == 0){
        return 0;
        }else{
            return array[tamanho - 1] + soma_array(array, tamanho - 1);
        }
}

void exibe_array(float array[], int tamanho){
    printf("[ ");
    for(int i = 0; i < tamanho; i++){
        printf("%f ", array[i]);
    }
    printf(" ]\n");
}

int main(){
    float array[] = {1.1, 2.2, 3.3, 3.3,    1.1};
    int n = sizeof(array)/sizeof(array[0]);
    exibe_array(array, n);
    printf("Soma dos vetores = %.2f\n", soma_array(array, n));
    return 0;

}