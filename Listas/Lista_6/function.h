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
void Caminho(int escolha, struct node **head);
struct node* adicionar(struct node **head, Livro livro, char *var);
void deletar(struct node **head, char *var);
void PrintLivro(struct node *head);

#endif