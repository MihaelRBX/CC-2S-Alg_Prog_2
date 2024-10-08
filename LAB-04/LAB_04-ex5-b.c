#include <stdio.h>
#include <stdbool.h>

bool primo(int num) {
    if(num <= 1){
        return false;
    }

    for(int i=2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }
    
    return true;
}

void primosN1N2(int n1, int n2){
    printf("Números primos entre %d e %d: \n", n1, n2);
    for(int i = n1; i <= n2; i++){
        if(primo(i)){
            printf("%d\n", i);
        }
    }
    printf("\n");
}

int main(){
    int n1, n2;
    printf("Digite dois números inteiros (N1 e N2): ");
    scanf("%d %d", &n1, &n2);

    primosN1N2(n1, n2);

    return 0;
}