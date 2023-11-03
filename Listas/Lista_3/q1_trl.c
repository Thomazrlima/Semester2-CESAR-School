#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  int N, i,j,k, mais = 0;
  char linha[201];
  char alfa[26] = "abcdefghijklmnopqrstuvwxyz";
  
  scanf("%d", &N);

  for(i = 0; i < N; i++){
    int repetir[26] = {0};
    scanf(" %200[^\n]", linha);

    for(j = 0; j < strlen(linha); j++){
      linha[j] = tolower(linha[j]);
    }
    
    for(j = 0; j < 26; j++){
      for(k = 0; linha[k] != '\0'; k++){
        if (alfa[j] == linha[k]){
          repetir[j]++;
        }
      }
    }
   for(j = 0; j < 26; j++){
     if (j == 0){
       mais = repetir[j];
     }
     if(repetir[j] > mais){
       mais = repetir[j];
     }
   }
  for(j = 0; j < 26; j++){
    if(repetir[j] == mais){
      printf("%c", alfa[j]);
    }
  }
  printf("\n");
  }
  
  return 0;
}
