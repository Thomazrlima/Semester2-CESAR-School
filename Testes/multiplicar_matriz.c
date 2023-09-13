#include <stdio.h>

int main(void) {
  
  int G, A, M, i, j, k;
  
  scanf("%d %d %d", &G, &A, &M);
  
  int matriza[G][A], matrizb[A][M];

  for (i = 0; i < G; i++){
    for (j = 0; j < A; j++){
       scanf("%d", &matriza[i][j]);
      }
  }
  for (i = 0; i < A; i++){
    for (j = 0; j < M; j++){
       scanf("%d", &matrizb[i][j]);
      }
  }

  int result[G][M];
  
  for (i = 0; i < G; i++){
    for (j = 0; j < M; j++){
      result[i][j] = 0;
      for (k = 0; k < A; k++){
        result[i][j] += matriza[i][k]*matrizb[k][j];
      }
    }
  }

  
  for (i = 0; i < G; i++){
    for (j = 0; j < M; j++){
      printf("%*d", 3, result[i][j]);
      if(j < M-1){
        printf(" ");
      }else{
        printf("\n");
      }
    }
  }
  
  return 0;
}
