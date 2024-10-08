#include <stdio.h>

int fib(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return fib(n - 1) + fib(n - 2);
    }
}

int main(){
    int n;
    printf("Valor de N: ");
    scanf("%d", &n);
    printf("%dº termo da sequência de Fibonacci: %d.\n", n, fib(n));
    return 0;
}