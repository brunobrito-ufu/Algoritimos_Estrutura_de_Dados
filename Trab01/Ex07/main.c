#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "prob_josephus.h"

int main (){

    int op;  

    do{
        system("CLS || clear");

        do{
            printf(" --- PROBLEMA DE JOSEPHUS --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Inicializar listas\n");
            printf(" 2. Inserir um novo soldado no pelotao\n");
            printf(" 3. Remover um soldado qualquer do pelotao\n");
            printf(" 4. Imprimir nome do(s) soldados do pelotao\n");
            printf(" 5. Imprimir nome do(s) soldados eliminados\n");            
            printf(" 6. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 6))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");            
        } while ((op < 1) || (op > 6));

        switch (op){
            
        case 1: 
            printf("\n1 . CRIAR LISTAS \n\n");
            List soldados, mortos;
            soldados = creat_list();
            mortos = creat_list();

            printf("Listas criadas com sucesso! Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break;

        case 2:
            printf("\n2. Inserir um novo soldado no pelotao\n");
            char nome[20];
            int res2;
            printf("\nDigite o nome do soldado: ");
            fflush(stdin);
            fgets(nome, 20, stdin);

            res2 = insert_soldier_end(&lst, nome);

            if(res2 == -1)
                printf("/nSoldado inserido com sucesso. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\nFalha ao inserir soldado! Aperte qualquer tecla para continuar\n\n");

            getch();
            break;

        case 3:
            printf(" 3. Remover um soldado qualquer do pelotao\n");
            
            int res3;
            

            res3 = insere

            if(res2 == -1)
                printf("/nSoldado inserido com sucesso. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\nFalha ao inserir soldado! Aperte qualquer tecla para continuar\n\n");

            getch();
            break;

        default:
            printf("\n\nPressione qualquer tecla para FINALIZAR...\n\n");
            getch();
        }

    }while(op != 7);

        return 0;
}