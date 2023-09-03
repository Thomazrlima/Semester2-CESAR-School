#include <stdio.h>

int main(void) {
  int x, i, j;
  int matriz[x][x];
  
  while(1){
    scanf("%d", &x);

    if (x == 0){
      break;
    }

    else{
      
      matriz[0][0] = 1;
      for (i = 1; i <x; i++){
        matriz[i][0] = matriz[i-1][0]*2;
      }
      
      for (i = 0; i < x; i++){
        for (j = 0; j < x; j++){
          if (j != 0){
            matriz[i][j] = matriz[i-1][j]*2;
          }
        }
      }

      for (i = 0; i < x; i++){
        for (j = 0; j < x; j++){
          printf("  %d  ", matriz[i][j]);
        }
        printf("\n");
      }
    }
  }
  
  return 0;
}
