#ifndef __FUNCTION__

typedef struct {
  char Titulo[50];
  char Autor[50];
  int NumReg;
  double Preco;
} Livro;

struct node{
Livro livro;
struct node *next;
};

Livro adicionar(struct node **head, Livro livro, char *var);
Livro GetLivro();
void PrintLivro(Livro livro);

#endif