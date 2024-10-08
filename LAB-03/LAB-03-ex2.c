#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int numero_secreto = rand() % 100 + 1;
    int bet, bets = 0;

    do {

        printf("Digite sua bet: ");
        scanf("%d", &bet);

        if (bet < 1 || bet > 100) {
            printf("Por favor, digite um valor válido entre 1 e 100.\n");
            continue;
        }

        bets++;

        if (bet == numero_secreto) {
            printf("Parabéns!!! Você acertou em %d bets.\n", bets);
        } else if (bet < numero_secreto) {
            printf("Você chutou muito baixo! Tente novamente.\n");
        } else {
            printf("Você chutou muito alto! Tente novamente.\n");
        }

    } while (bet != numero_secreto);

    return 0;
}
