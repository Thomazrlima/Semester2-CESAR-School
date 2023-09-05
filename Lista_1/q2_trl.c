#include <stdio.h>

int main(void) {
  
  int G, A, M, C, i, j, k;
  
  scanf("%d %d %d %d", &G, &A, &M, &C);
  
  int matriza[G][A], matrizb[A][M], matrizc[M][C], maior[C];

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
  for (i = 0; i < M; i++){
    for (j = 0; j < C; j++){
       scanf("%d", &matrizc[i][j]);
      }
  }

  int result[G][M], fim[G][C];
  
  for (i = 0; i < G; i++){
    for (j = 0; j < M; j++){
      result[i][j] = 0;
      for (k = 0; k < A; k++){
        result[i][j] += matriza[i][k]*matrizb[k][j];
      }
    }
  }
  
  for (i = 0; i < G; i++){
    for (j = 0; j < C; j++){
      fim[i][j] = 0;
      for (k = 0; k < M; k++){
        fim[i][j] += result[i][k]*matrizc[k][j];
        }
      }
  }

  for(i = 0; i < C; i++){
    maior[i] = fim[0][i];
    for (j = 0; j < C; j++){
      if(fim[j][i] > maior[i]){
        maior[i] = fim[j][i];
      }
    }
  }

  int spc, place;

  for(i=0; i < C; i++){
    place = maior[i];
    spc = 0;
    while(place != 0){
      spc++;
      place/= 10;
    }
    maior[i] = spc;
  }

  
  for (i = 0; i < G; i++){
    for (j = 0; j < C; j++){
      printf("%*d", maior[j], fim[i][j]);
      if(j < C-1){
        printf(" ");
      }else{
        printf("\n");
      }
    }
  }
  
  return 0;
}
