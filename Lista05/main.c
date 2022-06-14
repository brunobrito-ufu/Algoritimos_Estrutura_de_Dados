#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "listaNO.h"

int main(){

    Lista lista;
    int op;


    do{
        do{
            printf(" --- LISTAS ESTATICAS SEQUENCIAIS --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Verificar lista cheia\n");
            printf(" 4. Inserir elemento\n");
            printf(" 5. Inserir elemento ordenado\n");
            printf(" 6. Excluir elemento\n");
            printf(" 7. Excluir elemento ordenado\n");
            printf(" 8. Imprimir lista\n");
            printf(" 9. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 9)) {

                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while((op < 1) || (op > 9));

        switch(op)
        {
            case 1:
                printf("\n\n 1. Criar lista\n");
                lista = cria_lista();
                if(lista == NULL){
                    printf("Erro ao criar lista.\n");
                }else{
                    printf("Lista criada com sucesso.\n\n");
                }
                break;

            case 2:
                printf("\n\n 2. Verificar lista vazia\n");
                if(lista_vazia(lista) == 0){
                    printf("A lista esta vazia.\n");
                }else{
                    printf("A lista contem um ou mais elementos.\n\n");
                }
                break;

            case 3:
                printf("\n\n Recurso ainda nao foi implementado...");
                getch();
                break;

            case 4:
                printf("\n\n 4. Inserir elemento\n");
                printf("Digite o elemento a ser inserido: ");
                int j;
                scanf("%d", &j);
                if(insere_elem(lista, j) == 0){
                   printf("Elemento %d inserido com sucesso.\n", j);
                   }else{
                    printf("Falha ao inserir elemento. Lista nao criada ou lista esta cheia.\n");
                   }
                break;

            case 5:
                printf("\n\n Recurso ainda nao foi implementado...");
                getch();
                break;

            case 6:
                printf("\n\n Recurso ainda nao foi implementado...");
                getch();
                break;

            case 7:
                printf("\n\n Recurso ainda nao foi implementado...");
                getch();
                break;

            default:
				printf("\n\n Pressione qualquer tecla para FINALIZAR...");
				getch();
        }
    } while(op != 9);


















   return 0;
}
