#include <stdio.h>
#include <math.h>

int main(void) {

  int C, i;
  scanf("%d", &C);

  for(i = 0; i < C; i++){
    int N, x, y, x2, y2, k, result = 0;
    float var, menor = 65536.0;
    
    scanf("%d", &N);
    scanf("%d %d", &x, &y);

    for(k = 0; k < N; k++){
      scanf("%d %d", &x2, &y2);
      
      var = sqrt(pow((x2 - x), 2) + pow((y2 - y), 2));
        
      if(var < menor){
        menor = var;
        result = k+1;
      }
      
    }
    printf("%d\n", result);
  }
  
  return 0;
}
