#include <stdio.h>
#include <math.h>

struct point{
  int x;
  int y;
};

int main(void) {
  while (1){
    
  float dist;
  struct point st;
  struct point pos = {4,3};
    
  scanf("%d %d", &st.x, &st.y);

  if(st.x == 0 || st.y == 0){
    printf("Programa Finalizado\n");
    break;
  }
  
  dist = sqrt(((st.x-pos.x)*(st.x-pos.x)+(st.y - pos.y)*(st.y - pos.y)));

  printf("%.3f\n", dist);
  }
  
  return 0;
}
