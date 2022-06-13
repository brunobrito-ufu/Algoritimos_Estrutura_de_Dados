//TAD Lista não-ordenada;
typedef struct Lista* Lista;

        /*Dados: Desenvolva um programa aplicativo que permita ao usuário inicializar uma lista, inserir 
        e remover elementos e imprimir a lista.
        Lista de operações: criar_lista, lista_vazia, lista_cheia,insere_elem, remove_elem, obtem_valor_elem.

Operações:
Operação criar_lista:*/
void cria_lista();
/*Entrada: endereço da lista
Pré-condição: nenhuma
Processo: cria uma lista linear não ordenada de no máximo 20 números inteiros 
Saída: nenhuma
Pós-condição: uma lista vazia

Operação lista_vazia:*/
int lista_vazia();
/*Entrada: endereço da lista
Pré-condição: nenhuma
Processo: retorna se uma lista está vazia.
Saída: 1 para sucesso (vazia), 0 para falha
Pós-condição: nenhuma

Operação lista_cheia:*/
int lista_cheia();
/*Entrada: endereço da lista
Pré-condição: nenhuma
Processo: retorna se uma lista está cheia.
Saída: 1 para sucesso (cheia), 0 para falha
Pós-condição: nenhuma

Operação insere_elem:*/
int insere_elem();
/*Entrada: endereço da lista e o elemento a inserir
Pré-condição: lista existir e nao estar cheia
Processo: insere um elemento na lista, se não estiver cheia.
Saída: 1 para sucesso (inseriu), 0 para falha
Pós-condição: lista com um elemento inserido a mais

Operação remove_elem:*/
int remove_elem();
/*Entrada: endereço da lista e o elemento a remover
Pré-condição: lista existir e nao estar vazia e o elemento estar na lista
Processo: remove um elemento da lista
Saída: 1 para sucesso (removeu), 0 para falha
Pós-condição: lista com um elemento a menos

Operação obtem_valor_elem:*/
int obtem_valor_elem();
/*Entrada:  endereço da lista e o elemento a obter o valor
Pré-condição: lista nao estar vazia
Processo: retorna um valor de um elemento selecionado.
Saída: 1 para sucesso (obteve o valor), 0 para falha
Pós-condição: nenhuma