#include <stdio.h>

int main(void) {

  int n;
  while((scanf("%d", &n)) != EOF){
    int i, j;
    int matriz[n][n];
  
    for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
        if(i == n - j - 1){
          matriz[i][j] = 2;
        }
        else if (i == j){
          matriz[i][j] = 1;
        }
        else{
          matriz[i][j] = 3;
        }
      }
    }
  
    for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
        printf("%d", matriz[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}