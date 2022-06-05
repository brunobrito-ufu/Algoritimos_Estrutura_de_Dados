#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <"ponto.h">

struct Ponto{
    float x, y;
};


Ponto* gera_pto(float x, float y){
    Ponto* p = (Ponto*) malloc (sizeof(Ponto))
    if (p != NULL){
        p->x = x;
        p->y = y; 
    }
    return p;    
}

int main()
{




    return 0;
}
