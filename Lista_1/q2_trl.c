#include <stdio.h>

int main(void) {
  int x, i, j;
  
  while(1){
    int cont = 1, y = 1, nun = 1;

    scanf("%d", &x);
    
    for (i = 0; i < x; i++){
      nun *= 4;
    }
    for (i = 0; i < x; i++){
      if(nun > 9){
        nun /= 10;
        cont ++;
      }
        else{
        break;
      }
    }
    
    int matriz[x][x];

    if (x == 0){
      break;
    }

    else{

      matriz[0][0] = 1;
      
      for (i = 1; i < x; i++){
        y = y*2;
        matriz[i][0] = y;
      }
      
      for (i = 0; i < x; i++){
        for (j = 1; j < x; j++){
          matriz[i][j] = matriz[i][j-1]*2;
          }
      }
      
      for (i = 0; i < x; i++){
        for (j = 0; j < x; j++){
          printf("%*d", cont-1, matriz[i][j]);
          if(j < x - 1){
          printf(" ");
        }
        }
        printf("\n");
      }
    }
  }
  
  return 0;
}
