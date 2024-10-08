#include <stdio.h>

int reverterRecursivo(int n, int assist){
    if(n == 0){
        return assist;

    }else{
        return reverterRecursivo(n / 10, assist * 10 + n % 10);
    }
}

int main(){
    int n;
    printf("Insira o valor de N: ");
    scanf("%d", &n);
    printf("Reverso de %d: %d\n", n, reverterRecursivo(n, 0));//É necessário declarar a variavel de assistencia como 0 para o funcionamento do programa.
    return 0;
    
}