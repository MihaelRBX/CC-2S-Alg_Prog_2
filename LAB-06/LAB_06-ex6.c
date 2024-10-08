#include <stdio.h>
#include <stdlib.h>

void somaAB(int n, int m, int A[][m], int B[][m], int C[][m]){
  for(int i = 0; i < n; i++){
    for(int j = 0; i < m; j++){
      C[i][j] = A[i][j] + B[i][j];
    }
  }
}
