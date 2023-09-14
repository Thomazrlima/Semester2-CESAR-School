#include <stdio.h>
int main(void) {

  int x, y, i, j, cima = 0, baixo = 0;
  scanf("%d %d", &x, &y);
  int matriz[x][y];

  for(i=0; i < x; i++){
    for(j=0; j < y; j++){
      scanf("%d", &matriz[i][j]);
      if(j > i){
        cima += matriz[i][j];
      }
      else if(j < i){
        baixo += matriz[i][j];
      }
    }
  }
  for(j=0; j < y; j++){
    for(i=0; i < x; i++){
      printf("%*d", 3, matriz[i][j]);
    }
    printf("\n");
  }
  printf("Soma dos de cima %d soma dos de baixo %d", cima, baixo);
  
  return 0;
}
