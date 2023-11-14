Requisitos:

GCC instalado no Linux e MacOS ou Replit.

Executando:

Compilação:
Abra um terminal e navegue até o diretório onde os arquivos do código-fonte estão localizados. Em seguida, execute o seguinte comando de compilação:
gcc main.c menu.c function.h function.c -o main

Execução:
Após a compilação bem-sucedida, execute o programa com o seguinte comando:
./main

1-Cadastrar Livro:
Além de salvar os livros em uma lista encadeada, o sistema automaticamente os ordena. Isso é perceptível ao utilizar a opção '2 - Listar Livros', onde os livros estarão organizados de forma alfabética.


2-Listar Livro:
Lista todos os livros já salvos no Arquivo.dat

3-Editar Livro:
Função Indisponível

4-Pesquisar Livro:
O usuário pode informar o nome do livro desejado. O sistema retornará todas as informações disponíveis sobre o livro.

5-Excluir Livro:
Para excluir um livro específico, o usuário deve escolher a opção '5 - Excluir Livro' e informar o nome do livro desejado. O livro será removido, e todas as informações associadas a ele serão excluídas, tal funcionalidade apenas exclui os ítens da lista encadeada. 

6-Salvar
Salva todos os livros da lsita encadeada no .dat

7-Finalizar
Finaliza a execução do Programa

Alterações Realizadas no Código Original
Adição de um Menu (localizado em menu.c), que lista opções de ações para o usuário por meio de um switch case.
Adição da função "adicionar" que salva os inputs em uma lista encadeada e os organiza em ordem alfabética.
Adição da função "pesquisar" que realiza buscas nos arquivos salvos no arquivo .dat.
Adição da função "deletar" que remove elementos da lista encadeada.
Adição da função "salvar" que armazena os elementos da lista encadeada em um arquivo .dat e os libera posteriormente.

Observações:
A função "editar" está comentada, pois não foi possível concluí-la em tempo hábil.
Certifique-se de que todos os arquivos necessários, incluindo "function.h", estejam presentes no mesmo diretório que os arquivos do código-fonte.