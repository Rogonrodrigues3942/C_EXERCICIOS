/*9 - Gerar e mostrar um vetor de 10 posições com valores de 0 a 99, calcular a 
média e depois substituir os elementos abaixo da média por 0 e os acima por 1. 
Mostrar o novo vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10

int main(){

    int vetor[tam] = {0};
    int troca1 = 1, troca0 = 0, soma = 0, md;

    srand(time(0));

    printf("\nVetor = ");

    for (int i = 0; i < tam; i++){
        vetor[i] = 1 + rand() % 100;
        soma +=vetor[i];
        printf("%d ", vetor[i]);
    }

    printf("\n\nMedia = %d.\n\n", md = soma / tam);

    for (int i = 0; i < tam; i++){
        if( vetor[i] > md)
            vetor[i] = 1;
        else 
            vetor[i] = 0;
    
    printf("%d ", vetor[i]);
    }

    return 0;
}