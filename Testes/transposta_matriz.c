#include <stdio.h>
int main(void) {

  int x, y, i, j;
  scanf("%d %d", &x, &y);
  int matriz[x][y];

  for(i=0; i < x; i++){
    for(j=0; j < y; j++){
      scanf("%d", &matriz[i][j]);
    }
  }
  for(j=0; j < y; j++){
    for(i=0; i < x; i++){
      printf("%*d", 3, matriz[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
