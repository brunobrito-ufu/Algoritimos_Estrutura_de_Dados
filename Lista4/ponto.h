TAD ponto;

        Dados: O programa aplicativo deve ler as coordenadas de 2 pontos, digitadas pelo usuário e
               imprimir na tela a distância entre esses pontos. Nesse processo, o programa deve criar
               os 2 pontos, calcular a distância entre esses pontos e, após apresentar o resultado,
               liberar os dois pontos
        Lista de operações: gera_pto, set_pto, get_pto, libera_pto, distancia_pto:

Operações:
        Operação gera_pto:
            Entrada:
            Pré-condição:
            Processo: cria uma instância de um ponto sem valores.
            Saída:
            Pós-condição:

        Operação set_pto:
            Entrada:
            Pré-condição:
            Processo: atribui os valores das coordenadas x e y de um ponto.
            Saída:
            Pós-condição:

        Operação get_pto:
            Entrada:
            Pré-condição:
            Processo: retorna os valores das coordenadas x e y de um ponto.
            Saída:
            Pós-condição:

        Operação libera_pto:
            Entrada:
            Pré-condição:
            Processo: operação que elimina um ponto criado.
            Saída:
            Pós-condição:

        Operação distancia_pto:
            Entrada:
            Pré-condição:
            Processo: calcula a distância entre dois pontos.
            Saída:
            Pós-condição:






















/* TAD: Ponto (x,y) */
/* Tipo exportado */
typedef struct ponto Ponto;
/* Funções exportadas */
/* Função cria
** Aloca e retorna um ponto com coordenadas (x,y)
*/
Ponto* cria (float x, float y);
/* Função libera
** Libera a memória de um ponto previamente criado.
*/
void libera (Ponto* p);
/* Função acessa
** Devolve os valores das coordenadas de um ponto
*/
void acessa (Ponto* p, float* x, float* y);
/* Função atribui
** Atribui novos valores às coordenadas de um ponto
*/
void atribui (Ponto* p, float x, float y);
/* Função distancia
** Retorna a distância entre dois pontos
*/
float distancia (Ponto* p1, Ponto* p2);






