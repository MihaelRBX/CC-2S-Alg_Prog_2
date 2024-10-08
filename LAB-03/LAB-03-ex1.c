#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(NULL));
    int numero_sorteado = rand() % 100 + 1;

    int bet, bets = 0;
    
    while(1){
        printf("Escolha um número de 0 a 100: \n");
        scanf("%d", &bet);

        if(bet < 1 || bet > 100){
            printf("Digite um valor válido (0 a 100)");
            continue;
        }
        
        bets ++;

        if (bet == numero_sorteado){
            printf("Parabéns!!! Você acertou!");
        } else if (bet < numero_sorteado) {
            printf("Você chutou muito baixo! O valor correto é %d.\n",  numero_sorteado);
        } else {
            printf("Você chutou muito alto! O valor correto é %d.\n", numero_sorteado);
        }
    }

    return 0;

}