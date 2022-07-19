//TAD Lista dinamica encadeada nó cabeçalho não-ordenada;
typedef struct node* List;

        /*Dados: Desenvolva um programa aplicativo que permita ao usuário inicializar uma lista, inserir
        e remover elementos e imprimir a lista.
        Lista de operações: criar_lista, lista_vazia,insere_elem, remove_elem, obtem_valor_elem.

Operações:
Operação criar_lista:*/
List create_list();
/*Entrada: nenhuma
Pré-condição: nenhuma
Processo: cria uma lista linear não ordenada de no máximo 20 números inteiros
Saída: nenhuma
Pós-condição: uma lista vazia

Operação lista_vazia:*/
int empty_list(List lst);
/*Entrada: endereço da lista
Pré-condição: nenhuma
Processo: retorna se uma lista está vazia.
Saída: 1 para sucesso (vazia), 0 para falha
Pós-condição: nenhuma

Operação insere_elem:*/
int insert_elem(List lst, int elem);
/*Entrada: endereço da lista e o elemento a inserir
Pré-condição: lista existir e nao estar cheia
Processo: insere um elemento na lista, se não estiver cheia.
Saída: 1 para sucesso (inseriu), 0 para falha
Pós-condição: lista com um elemento inserido a mais

Operação remove_elem:*/
int remove_elem(List lst, int elem);
/*Entrada: endereço da lista e o elemento a remover
Pré-condição: lista existir, nao estar vazia e o elemento estar na lista
Processo: remove um elemento da lista
Saída: 1 para sucesso (removeu), 0 para falha
Pós-condição: lista com um elemento a menos

Operação obtem_valor_elem:*/
int get_elem(List lst, int elem);
/*Entrada: endereço da lista e o elemento a obter o valor
Pré-condição: lista existir e nao estar vazia 
Processo: retorna um valor de um elemento selecionado.
Saída: 0 para sucesso (obteve o valor), -1 para falha
Pós-condição: nenhuma

Operação imprime_lista:*/
void print_list(List lst);
/*Entrada: endereço da lista
Pré-condição: lista existir e nao estar vazia 
Processo: imprime a lista com os valores inseridos
Saída: 0 para sucesso (obteve o valor), -1 para falha
Pós-condição: nenhuma
*/
