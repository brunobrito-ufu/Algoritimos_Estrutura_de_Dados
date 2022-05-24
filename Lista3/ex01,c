#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

struct Individuo {
    int codigo_genetico[10]; // valores binarios aleatorios
    float aptidao_abs; // pontencial de cada individuo (0.0 <= aptidao <= 10.0)
    float aptidao_relativa; // deve ser calculada em tempo de execução...
};

struct Populacao {
    struct Individuo *pop; // um vetor de N individuos
    int tamanho; // tamanho N da população (N = 100)
};

typedef struct Populacao populacao;

int main(){

    populacao p;


    printf("Digite o tamanho da populacao (inteiro positivo entre 1 e 100): ");
    scanf("%d", &p.tamanho);

    p.pop = (struct Individuo*) malloc(p.tamanho * sizeof(struct Individuo));

    if(p.pop == NULL){
        printf("Erro ao alocar memoria!!\n");
        return -1;
    }

    for(int i = 0; i < p.tamanho; i++){
        for(int j = 0; j < 10; j++){
/*printf("%d ",*/p.pop[i].codigo_genetico[j] = ((rand() % 2) == 0) ? 1 : 0;
        }
        //printf("\n");
    }


    for(int i = 0; i < p.tamanho; i++){
/*printf("%.2f \n",*/p.pop[i].aptidao_abs = (10.0 / RAND_MAX) * rand();

       }

//A aptidão relativa é igual a aptidão absoluta de um indivíduo específico dividida pela soma de todas as aptidões absolutas
    
    for(int i = 0; i < p.tamanho; i++){
    p.pop[i].aptidao_relativa = p.pop[i].aptidao_abs / 
    
    }
    
    
    
    
    
    
    

    return 0;
}
