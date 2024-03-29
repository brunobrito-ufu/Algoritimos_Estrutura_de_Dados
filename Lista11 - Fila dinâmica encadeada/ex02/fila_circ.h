//TAD Fila dinamica encadeada estratégia cricular
typedef struct no* Fila;

        /*Dados: números inteiros
        Lista de operações: cria_fila, fila_vazia, insere_fim, remove_ini, le_final, imprime_fila.

Operações:
Operação cria_fila:*/
Fila cria_fila();
/*Entrada: nenhuma
Pré-condição: nenhuma
Processo: cria uma fila e coloca no estado de vazia
Saída: endereço da fila criada
Pós-condição: nenhuma

Operação fila_vazia:*/
int fila_vazia(Fila fil);
/*Entrada: endereço da fila
Pré-condição: nenhuma
Processo: retorna se uma fila está vazia.
Saída: 0 para sucesso (vazia), -1 para falha
Pós-condição: nenhuma

Operação insere_fim:*/
int insere_fim(Fila *fil, int elem);
/*Entrada: endereço da fila e o elemento a inserir
Pré-condição: fila existir e nao estar cheia
Processo: insere um elemento no fim da fila
Saída: 0 para sucesso (inseriu), -1 para falha
Pós-condição: fila de entrada com um elemento a mais

Operação remove_ini:*/
int remove_ini(Fila *fil, int *elem);
/*Entrada: endereço da fila e o elemento a remover
Pré-condição: fila existir e nao estar vazia
Processo: remove um elemento no inicio da fila e retorna o valor ao usuario
Saída: 0 para sucesso, -1 para falha
Pós-condição: fila com um elemento a menos

Opereção le_final:*/
int le_final(Fila fil, int *elem);
/*Entrada: endereço da fila e o elemento a obter o valor
Pré-condição: fila existir e nao estar vazia 
Processo: retorna o valor do elemento no fim da fila
Saída: 0 para sucesso, -1 para falha
Pós-condição: nenhuma
/*

Operação imprime_fila:*/
void imprime_fila(Fila fil);
/*Entrada: endereço da fila
Pré-condição: fila existir 
Processo: imprime a fila com os valores inseridos
Saída: 0 para sucesso, -1 para falha
Pós-condição: nenhuma*/