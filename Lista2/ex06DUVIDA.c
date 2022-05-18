#include <stdio.h>
#include <stdlib.h>  

int main (){  

    int *v;
    int tam, par, impar;

    printf("Quantos inteiros serão lidos: ");
    scanf ("%d", &tam);

    v = (int*) malloc(tam * sizeof(int));

    if(v == NULL){
        printf("Erro ao alocar memoria \n");
        return 1;
    }

    for(int i = 1; i <= tam; i++){
        printf("%do inteiro: ", i);
        scanf("%d", &v[i]);
    }

    for(int i = 1; i <= tam; i++){
        if (v[i] % 2 == 0)
    {
        printf("Sao pares: ? dos %d inteiros lidos.", tam);
    }
    }
    
    
    
    
    /*if (v[i] % 2 == 0)
    {
        printf("Sao pares:  dos %d inteiros lidos.", tam);
    }

    else
    {
        printf("Sao impares: %d dos %d inteiros lidos.",x, tam);
    }*/
    
    
        


return 0;      
}

