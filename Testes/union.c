#include <stdio.h>
#include <math.h>

union intchar{
  int x;
  char c[4];
};

int main(void) {
  union intchar input;
  scanf("%u", &(input.x));

  for(int i = 0; i < 4; i++){
    printf("O byte %d de input é %u\n", i, input.c[i]);
  }

  scanf("%u %u %u %u", &(input.c[0]), &(input.c[1]), &(input.c[2]), &(input.c[3]));

  printf("O numero é: %u\n", input.x);

  for (int i = 0; i < 4; i++) {
    printf("O byte %d de input é %u\n", i, input.c[i]);
  }
  
  return 0;
}
