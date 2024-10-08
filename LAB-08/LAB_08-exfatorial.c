#include <stdio.h>

int fat(n){
    if(n == 1){
        return 1;
    }else{
        return n * fat(n - 1);
    }
}

int main(){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fat(n));
    return 0;
}