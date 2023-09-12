#include <stdio.h>

int comp(int A, int B, int cardA[A], int cardB[B]);

int main(void) {
  while(1){
    int j, A, B;
      scanf("%d %d\n", &A, &B);
    
    int cardA[A], cardB[B];
      if (A == 0 || B == 0){
        break;
      }
    
      for(j = 0; j < A; j++){
        scanf("%d", &cardA[j]);
      }
    
      for(j = 0; j < B; j++){
        scanf("%d", &cardB[j]);
      }
      int resultado = comp(A, B, cardA, cardB);
      printf("%d\n", resultado);
  }
  return 0;
}

int comp(int A, int B, int cardA[A], int cardB[B]){
  int i, k, novoA[A], novoB[B], tama = 0, tamb = 0;

  novoA[0] = cardA[0];
  for(i = 1; i <= A; i++){
    if(cardA[i] != cardA[i-1]){
      tama += 1;
      novoA[tama] = cardA[i];
    }
  }

  novoB[0] = cardB[0];
  for(i = 1; i <= B; i++){
    if((cardB[i] != cardB[i-1])){
      tamb += 1;
      novoB[tamb] = cardB[i];
    }
  }

  int cont = 1, troca = 0;
  if(tama > tamb){
    for(i = 0; i < tamb; i++){
      for(k = 0; k < tama; k++){
        if (novoA[k] == novoB[i]){
          cont = 0;
        }
      }
      troca += cont;
      cont = 1;
    }
  }
  else{
    for(i = 0; i < tama; i++){
      for(k = 0; k < tamb; k++){
        if (novoB[k] == novoA[i]){
          cont = 0;
        }
      }
      troca += cont;
      cont = 1;
  }
  }
  return troca;
}
