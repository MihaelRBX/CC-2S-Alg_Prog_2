#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    prinf("Os divisores de %d são: ", num);

    for (int i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d", i);
        }
    }

    printf("\n");
    
    return 0;
}