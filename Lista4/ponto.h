TAD ponto;

        Dados: O programa aplicativo deve ler as coordenadas de 2 pontos, digitadas pelo usu�rio e
               imprimir na tela a dist�ncia entre esses pontos. Nesse processo, o programa deve criar
               os 2 pontos, calcular a dist�ncia entre esses pontos e, ap�s apresentar o resultado,
               liberar os dois pontos
        Lista de opera��es: gera_pto, set_pto, get_pto, libera_pto, distancia_pto:

Opera��es:
        Opera��o gera_pto:
            Entrada:
            Pr�-condi��o:
            Processo: cria uma inst�ncia de um ponto sem valores.
            Sa�da:
            P�s-condi��o:

        Opera��o set_pto:
            Entrada:
            Pr�-condi��o:
            Processo: atribui os valores das coordenadas x e y de um ponto.
            Sa�da:
            P�s-condi��o:

        Opera��o get_pto:
            Entrada:
            Pr�-condi��o:
            Processo: retorna os valores das coordenadas x e y de um ponto.
            Sa�da:
            P�s-condi��o:

        Opera��o libera_pto:
            Entrada:
            Pr�-condi��o:
            Processo: opera��o que elimina um ponto criado.
            Sa�da:
            P�s-condi��o:

        Opera��o distancia_pto:
            Entrada:
            Pr�-condi��o:
            Processo: calcula a dist�ncia entre dois pontos.
            Sa�da:
            P�s-condi��o:






















/* TAD: Ponto (x,y) */
/* Tipo exportado */
typedef struct ponto Ponto;
/* Fun��es exportadas */
/* Fun��o cria
** Aloca e retorna um ponto com coordenadas (x,y)
*/
Ponto* cria (float x, float y);
/* Fun��o libera
** Libera a mem�ria de um ponto previamente criado.
*/
void libera (Ponto* p);
/* Fun��o acessa
** Devolve os valores das coordenadas de um ponto
*/
void acessa (Ponto* p, float* x, float* y);
/* Fun��o atribui
** Atribui novos valores �s coordenadas de um ponto
*/
void atribui (Ponto* p, float x, float y);
/* Fun��o distancia
** Retorna a dist�ncia entre dois pontos
*/
float distancia (Ponto* p1, Ponto* p2);






