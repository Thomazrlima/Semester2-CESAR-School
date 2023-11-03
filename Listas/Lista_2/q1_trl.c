#include <stdio.h>

int rafa(int x, int y);
int beto(int x, int y);
int carlo(int x, int y);

int main(void) {
  
  int n, i, x, y, r, b, c;
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d %d", &x, &y);
    r = rafa(x, y);
    b = beto(x, y);
    c = carlo(x, y);

    if (r > b && r > c){
      printf("Rafael ganhou\n");
    }

    else if (b > r && b > c){
      printf("Beto ganhou\n");
    }

    else{
      printf("Carlos ganhou\n");
    }
    
  }
  return 0;
}

int rafa(int x, int y){
  return (3*x)*(3*x) + y*y;
}
int beto(int x, int y){
  return 2*(x*x) + (5*y)*(5*y);
}
int carlo(int x, int y){
  return -100*x + (y*y*y);
}
