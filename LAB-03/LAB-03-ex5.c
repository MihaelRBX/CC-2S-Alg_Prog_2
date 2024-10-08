#include <stdio.h>

int main() {
    int num, sumdivisores;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for(int i = 1; i < num; i ++) {
        if(num % i == 0) {
            sumdivisores += i;
        }
    }

    if(sumdivisores == num) {
        printf("%d é um número perfeito\n", num);
    } else {
        printf("%d não é um número perfeito\n", num);
    }

    return 0;
}