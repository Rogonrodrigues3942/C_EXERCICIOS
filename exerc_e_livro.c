//Apresentar os quadrados dos numeros inteiros de 15 a 180.

#include <stdio.h>

int main(){
    
    int i, quad;

    for (i = 15; i < 181; i++){
        quad = i * i;
        printf("O quadradrado de %3d equivale a %005d.\n", i, quad);
    }

    return 0;
}