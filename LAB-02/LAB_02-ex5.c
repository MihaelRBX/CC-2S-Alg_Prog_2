#include <stdio.h>
#include <math.h>

int main(){
    float raio, area;
    printf("Informe o raio do círculo: ");
    scanf("%f", &raio);

    area = M_PI * (raio * raio);

    printf("Um círculo de raio %.2f tem área igual a %.2f", raio, area);

    return 0;
}