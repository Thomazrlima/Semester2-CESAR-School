#include <stdio.h>

int main(void) {
int x;
  while(1){
    scanf("%d",&x);
    if (x == 2002){
      printf("Acertou\n");
      break;
    }
    printf("Errou\n");
  }
}