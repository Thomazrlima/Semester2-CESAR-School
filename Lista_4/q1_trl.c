#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct elementos{
  float preco;
  char nome[50];
  float unidade;
};

int main(void) {
  struct elementos *frutas, *frutas2;
  int casos, mer, compra, i, k, j;

  scanf("%d", &casos);

  for(i = 0; i < casos; i++){

    float total = 0;
    scanf("%d", &mer);
    
    frutas = (struct elementos *)malloc(mer * sizeof(struct elementos));
    
    for(k = 0; k < mer; k++){
      scanf("%s %f", frutas[k].nome, &frutas[k].preco);
    }

    scanf("%d", &compra);
    frutas2 = (struct elementos *)malloc(compra * sizeof(struct elementos));
    for(k = 0; k < compra; k++){
      scanf("%s %f", frutas2[k].nome, &frutas2[k].unidade);
    }

    for(k = 0; k < compra; k++){
      for(j = 0; j < mer; j++){
        if (strcmp(frutas2[k].nome, frutas[j].nome) == 0){
          total += frutas2[k].unidade * frutas[j].preco;
          
        }
      }
    }
    printf("R$ %.2f\n", total);
    free(frutas);
    free(frutas2);
  }
  
  return 0;
}
