#include <stdio.h>

int mult(int a, int b){
    if(a == 0){
        return 0;
    }else if(b > 0){
        return a + mult(a, b - 1);
    }else{
        return -mult(a, - b);
    }
}

int main(){
    int a;
    int b;
    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("Informe o valor de b: ");
    scanf("%d", &b);
    printf("%d * %d = %d\n", a, b, mult(a, b));
    return 0;
}