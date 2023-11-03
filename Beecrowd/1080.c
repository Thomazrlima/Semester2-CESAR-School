#include <stdio.h>

int main(void) {
  
  int vetor[100], i, maior = 0, lugar;
  
  for(i = 0; i < 100; i++){
    scanf("%d", &vetor[i]);
    if(vetor[i] > maior){
      maior = vetor[i];
      lugar = i+1;
    }
  }
  printf("%d\n%d\n", maior, lugar);
  return 0;
}
