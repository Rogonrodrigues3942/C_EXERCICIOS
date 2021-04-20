/*10 - Fazer um programa em C que lê dois vetores de 10 posições e faz a multiplicação 
dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostrar 
o vetor resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10

int main(){

    int vetA[tam], vetB[tam], vetProduto[tam];
    int i = 0;

    srand(time(0));

    //Populando os vetores
    printf("\nVetor A = ");
    for(i = 0; i < tam; i++){
        vetA[i] = 1 + rand() % 101;
        printf("%d ", vetA[i]);
    }

    printf("\n\nVetor B = ");
    for(i = 0; i < tam; i++){   
        vetB[i] = 1 + rand() % 101;
        printf("%d ", vetB[i]);

        vetProduto[i] = vetB[i] * vetA[i];
    }

    //Saída da multiplicação.

    printf("\n\nVetor Produto = ");
    for(int i = 0; i < tam; i++)
        printf("%d ", vetProduto[i]);
    
    printf("\n\nFim do Programa\n");

    return 0;
}