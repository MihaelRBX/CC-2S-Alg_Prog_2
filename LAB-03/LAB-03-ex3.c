#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int numero_sorteado = rand() % 100 + 1;
    int bet, bets;


    for (bets = 1; bets <= 5; bets++) {
        printf("Digite sua aposta: ");
        scanf("%d", &bet);

        if (bet < 1 || bet > 100) {
            printf("Por favor, digite um valor válido entre 1 e 100.\n");
            bets--;
            continue;
        }

        if (bet == numero_sorteado) {
            printf("Parabéns!!! Você acertou em %d bets.\n", bets);
            return 0;
        } else if (bet < numero_sorteado) {
            printf("Você chutou muito baixo! Tente novamente.\n");
        } else {
            printf("Você chutou muito alto! Tente novamente.\n");
        }
    }

    printf("Você excedeu o número máximo de bets. O número correto era: %d\n", numero_sorteado);

    return 0;
}
