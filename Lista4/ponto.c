#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

struct Ponto{
    float x, y;
};


Ponto* gera_pto(float x, float y){
    Ponto* p = (Ponto*) malloc (sizeof(Ponto));
    if (p != NULL){
        p->x = x;
        p->y = y; 
    }
    return p;    
}
void pto_libera(Ponto* p){
    free(p);
}

void set_pto(Ponto* p, float x, float y){
        p->x = x;
        p->y = y;         
}

float get_pto(){

}

void libera_pto(Ponto* p){

}

float distancia_pto(Ponto* p1, Ponto* p2){
    float dx = p1->x - p2->x; //diferença entre os valores de x 
    float dy = p1->y - p2->y; //diferença entre os valores de y
    return sqrt(pow(dx,2)+ pow(dy,2));
}

int main()
{ 
    float d;
    Ponto *p, *q;
    p = gera_pto(10,21);
    q = gera_pto(7,25);
    d = distancia_pto(p,q);

    printf("A distancia entre os pontos eh de: %.2f\n",d);
 
    libera_pto(p);
    libera_pto(q);
   return 0;
}
