#include "function.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Menu(void) {
    int escolha;
    printf("O que você deseja fazer?\n");
    printf("1 - Cadastrar livro\n");
    printf("2 - Listar livros\n");
    printf("3 - Editar livro\n");
    printf("4 - Pesquisar livro\n");
    printf("5 - Excluir livro\n");
    printf("6 - Salvar\n");
    printf("7 - Finalizar\n");
    printf("Opcao: ");
    scanf("%d", &escolha);
    return escolha;
}

void Caminho(int escolha, struct node **head) {
    Livro livro;

    switch (escolha) {
        case 1:

            printf("\nDigite o titulo: ");
            getchar();
            fgets(livro.Titulo, 50, stdin);
            printf("\nDigite o nome do autor: ");
            fgets(livro.Autor, 50, stdin);
            printf("\nDigite o número do registro: ");
            scanf("%d", &livro.NumReg);
            printf("\nDigite o preco do livro: ");
            scanf("%lf", &livro.Preco);
            printf("\n");
            rewind(stdin);

            adicionar(head, livro, livro.Titulo);
            break;

        case 2:

            listar(head);
            break;

        /*case 3:

            printf("Digite o titulo do livro que deseja editar: ");
            char var[50];
            getchar();
            fgets(var, 50, stdin);
            editar(head, var);
            break;*/

        case 3:
            printf("Função Indisponível\n");
            break;

        case 4:
          
            printf("\nDigite o titulo do livro que deseja buscar: ");
            char var2[50];
            scanf("%s", var2);
            pesquisar(var2);
            break;
        

        case 5:

            printf("\nDigite o titulo do livro a ser excluido: ");
            char excluir[50];
            getchar();
            fgets(excluir, 50, stdin);
            deletar(head, excluir);
            break;

        case 6:
            salvar(head);
            break;

        case 7:
            exit(0);

        default:
            printf("Opção inválida.\n");
    }
}