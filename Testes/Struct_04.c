#include <stdio.h>
#include <math.h>

struct livro{
  int ano;
  int pag;
  char nome[30];
  char titulo[30];
};

int main(void) {
    
  int N, i;
  
  printf("Digite a quantidade de livros devolidos: ");
  scanf("%d", &N);
  struct livro dados[N];
  
  for(i = 0; i < N; i++){
    printf("Digite o nome do livro: ");
    scanf("%s", dados[i].titulo);
    printf("Digite o ano que o livro foi lançado: ");
    scanf("%d", &dados[i].ano);
    printf("Digite a quantidade de páginas do livro: ");
    scanf("%d", &dados[i].pag);
    printf("Digite o nome do aluno que pegou o livro: ");
    scanf("%s", dados[i].nome);
  }
  
printf("Título\tAno\tPág\tAluno\n");
  for(i = 0; i < N; i++){
    printf("%s\t%d\t%d\t%s\n", dados[i].titulo, dados[i].ano, dados[i].pag, dados[i].nome);
    }
  
  return 0;
}
