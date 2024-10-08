#include <stdio.h>

int mdc(int a, int b){
    if(b == 0){
        return a;

    }else if(a == 0){
        return b;

    }else{
        int r = a % b;
        return mdc(b, r);
    }
}

int main(){
    int a;
    int b;

    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);
    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    return 0;
}