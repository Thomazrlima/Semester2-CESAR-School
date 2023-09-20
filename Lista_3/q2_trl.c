#include <stdio.h>
#include <string.h>

int main(void) {
  char ling[24], ling2[24];
  int N, K, i, j;

  scanf("%d", &N);
  
  for(i = 0; i < N; i++){
    int cont = 0;
    scanf("%d", &K);
    scanf("%s", ling);
    
    for(j = 0; j < K-1; j++){
      scanf("%s", ling2);
      
      if(strcmp(ling, ling2) != 0){
        cont += 1;
      }
    }
    
    if (cont > 0){
      printf("ingles\n");
    }
    else{
      printf("%s\n", ling2);
    }
  }
  
  return 0;
}
