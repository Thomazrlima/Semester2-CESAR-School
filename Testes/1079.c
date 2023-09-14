#include <stdio.h>

int main(void) {
  
  int N, i;
  float x, y, z;
  scanf("%d", &N);
  
  for(i = 0; i < N; i++){
    scanf("%f %f %f", &x, &y, &z);
    printf("%.1f\n", (x*2 + y*3 + z*5)/10);
  }
  return 0;
}
