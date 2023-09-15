#include <stdio.h>

int main(void) {
  
  int vetor[100], i, maior, lugar;
  
  for(i = 0; i < 100; i++){
    scanf("%d", &vetor[i]);
  }
  for(i = 1; i < 100; i++){
    if(vetor[i] > vetor[i-1]){
      maior = vetor[i];
      lugar = i;
    }
  }
  printf("%d \n %d", maior, lugar);
  return ;
}
