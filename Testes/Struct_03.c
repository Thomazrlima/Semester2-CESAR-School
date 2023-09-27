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

struct point makepoint(int x, int y){
  struct point lugar;
  lugar.x = x;
  lugar.y = y;
  return lugar;
};

struct rect makescreen(struct point p1, struct point p2){
  struct rect lugar;
  lugar.str1 = p1;
  lugar.str2 = p2;
  return lugar;
}

int area_rect(struct rect retangulo){
  int altura,base;
  altura = abs(retangulo.str1.y - retangulo.str2.y);
  base = abs(retangulo.str1.x - retangulo.str2.x);
  return altura*base;
}

int main(void) {
    
  float dist;
  struct point st, x1, x2;
  struct rect retangulo;
    
  scanf("%d %d", &st.x, &st.y);
  x1 = makepoint(st.x,st.y);
  printf("As coordenadas do seu novo ponto sao (%d,%d)\n",  st.x,st.y);
  
  scanf("%d %d", &st.x, &st.y);
  x2 = makepoint(st.x,st.y);
  printf("As coordenadas do seu novo ponto sao (%d,%d)\n", st.x,st.y);

  retangulo = makescreen(x1,x2);

  printf("Area do retangulo construido: %d\n", area_rect(retangulo));
  
  return 0;
}
