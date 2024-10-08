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

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if (primo(num)){
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d näo é um número primo.\n", num);
    }

    return 0;

}