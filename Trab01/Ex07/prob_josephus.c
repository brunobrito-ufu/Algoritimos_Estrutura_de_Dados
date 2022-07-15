#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prob_josephus.h"

struct node{
    struct node *next;
    char name[];    
};

List creat_list(){
    return NULL;
}

int empty_list(List lst){
    if(lst == NULL)
        return 0;
    else
        return -1;
}

int insert_soldier_end(List *lst, char *name){
    List N = malloc (sizeof(struct node));

    if(N == NULL)
        return -1; //erro ao alocar novo nó

    strcpy(N->name, name);

    if(empty_list(*lst) == 0){
        N->next = N;
        *lst = N;      
    }else{
        N->next = (*lst)->next;
        (*lst)->next = N;
        *lst = N;
    }
    return 0;         
}

int insert_mortos(List *lst, char * name){
    List N = malloc (sizeof(struct node));    

    if(N == NULL)
        return -1; //nó 

    strcpy(N->name, name);

    if(empty_list(*lst) == 0){
        N->next = N;
        *lst = N;

        return 0;
    }   

     if(list_size(lst) == 1){
        (*lst)->next = N;
        N->next = *lst;
     }else{
        N->next = (*lst)->next;
        (*lst)->next = N;
    }

    return 0; //morto inserido na lista de mortos
}

int remove_soldier(List *lst, int nro){
    List aux;
    List last;
    List aux2;

    if(empty_list(*lst) == 0)
        return -1;

    aux = (*lst)->next;
    last = *lst;
    aux2 = aux;

    if(size_list(*lst) == 1 && (*lst)->info == elem){   //lista so tem um elemento
        *lst = NULL;
        // printf("\nTo saindo aqui 0!!\n");
        return 0;
    
    }else if(aux->info == elem){    //elem = primeiro da lista
        (*lst)->next = aux->next;
        free(aux);
        // printf("\nTo saindo aqui 1!!\n");
        return 0; 

    }else if(last->info == elem){   //elem = último da lista
        while(aux->next != last)
            aux = aux->next;
        *lst = aux;
        (*lst)->next = aux2;
        free(last);
        // printf("\nTo saindo aqui 2!!\n");
        return 0; 
               
    }else{
        while(aux->next != last){
            aux = aux->next;
            if(aux->info == elem){
                aux2->next = aux->next;
                free(aux);
                // printf("\nTo saindo aqui 3!!\n");
                return 0;
            }else{
                aux2 = aux2->next;                
            }            
        }return -2;  //elemento nao esta na lista
    
    }
}
    // if(empty_list(lst) == 0)
    //     return -1; //a lista está vazia
        
    // List aux = (*lst)->next;
    // List aux = (*lst)->next;    
    // List aux = (*lst)->next;

    // int nro;


    // nro = sort_number(lst);

    // if(nro <= 0)
    //     return -2; //nro sorteado é inválido, sorteie novamente

    // return 0;
//}

int number_soldier(List lst){
    if(empty_list(lst) == 0){
        return -1;
    }
    List aux = lst->next;
    List last = lst;
    int j = 1;

    if(list_size(lst) == 1){
        return j;
    }

    while(aux->next != last){
        aux = aux->next;
        j++;
    }j++;

    return j;
}
int sort_number(List lst){
    int sorteio, tam;      
  
    if(empty_list(lst) == 0)
        return -1;
   
    tam = list_size(lst);

    sorteio = (rand() % tam);

    return sorteio;
}


int list_size(List lst){
    int size = 0;

    if(lst == NULL){
        return size;
    }

    size = 1;

    List aux = lst->next;
    List last = lst;

    while(aux != last){        
        aux = aux->next;
        size++;
    }
    return size;
}