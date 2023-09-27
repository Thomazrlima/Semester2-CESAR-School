#include <stdio.h>
#include <math.h>

struct point{
  int x;
  int y;
};

struct rect{
  struct point str1;
  struct point str2;
};

int main(void) {
  while (1){
    
  float dist;
  struct point st;
  struct point pos = {4,3};
  struct rect tela;
    
  scanf("%d %d", &st.x, &st.y);

  if(st.x == 0 || st.y == 0){
    printf("Programa Finalizado\n");
    break;
  }

  tela.str1 = pos;
  tela.str2 = st;
  
  dist = sqrt(((st.x-pos.x)*(st.x-pos.x)+(st.y - pos.y)*(st.y - pos.y)));

  printf("%.3f\n", dist);

  int altura = abs(st.y - pos.y);
  int base = abs(st.x - pos.x);

  printf("Area do retangulo construido = %d\n",altura*base);
  }
  
  return 0;
}
