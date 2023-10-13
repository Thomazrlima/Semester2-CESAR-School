#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct van{
  char nome[50];
  char reg;
  int dist;
};

int main(void) {

  int casos, i, k;
  struct van *alunos;
  while (scanf("%d", &casos) != EOF){
  
    alunos = (struct van *)malloc(casos * sizeof(struct van));
    
    for(i = 0; i < casos; i++){
      scanf("%s %c %d", alunos[i].nome, &alunos[i].reg, &alunos[i].dist); 
    }
    for(i = 0; i < casos; i++){
      for(k = i+1; k < casos; k++){
        if(alunos[i].dist > alunos[k].dist){
          struct van aux1 = alunos[i];
          alunos[i] = alunos[k];
          alunos[k] = aux1;
        }

        if (alunos[i].reg > alunos[k].reg && alunos[i].dist >= alunos[k].dist) {
          struct van aux;
          aux = alunos[i];
          alunos[i] = alunos[k];
          alunos[k] = aux;
        }
          
        else if(alunos[i].dist == alunos[k].dist && alunos[i].reg == alunos[k].reg){
          if(strcmp(alunos[i].nome, alunos[k].nome) > 0){
            struct van aux1 = alunos[i];
            alunos[i] = alunos[k];
            alunos[k] = aux1;
          }
        }
      }
    }
  
    for(i = 0; i < casos; i++){
      printf("%s\n", alunos[i].nome);
    }
    free(alunos);
  }
  
  return 0;
}
