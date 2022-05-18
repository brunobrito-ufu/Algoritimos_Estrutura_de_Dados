#include <stdio.h>
#include <stdlib.h>


int main(){

    int *v;
    int tam = 5;

    v = (int*) malloc(tam * sizeof(int));

    if(v == NULL){
        printf("Erro ao alocar memoria \n");
        return 1;
    }

    printf("Escreva os valores que serao alocados na memoria:\n");

    for(int i = 0; i < tam; i++){
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < tam; i++){
        printf("v[%d] = %d  ", i, *(v+i));
    }

    free(v);

    return 0;
}
