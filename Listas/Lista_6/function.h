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

int Menu(void);
int Caminho(int escolha, Livro livro);
Livro adicionar(struct node **head, Livro livro, char *var);
Livro deletar(struct node *head, int var);
Livro GetLivro();
void PrintLivro(Livro livro);

#endif