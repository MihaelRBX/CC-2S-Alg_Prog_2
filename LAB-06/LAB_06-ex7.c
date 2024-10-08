#include <stdio.h>

void multAB(int n, int m, int p, int A[][m], int B[][p], int C[][p]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < p; j++){
      for(int k = o; k < m; k++){
          C[i][j] = A[i][k] * B[k][j];
      }
    }
  }
}
