/*3 - Pedir para o usuário preencher um vetor com 10 posições, mostrar os elementos 
que são múltiplos de 3 e as suas respectivas posições.*/

#include <stdio.h>
#define TAM 10

int main(){

    int vetor[TAM];
    int num;

    printf("\n\nMultiplos de 3 e suas posições\n\n");
    for(int i = 0; i < TAM; i++){
        printf("Insira o %d.o valor:  ", i + 1);
        scanf("%d", &num);
        vetor[i] = num;
    }

    printf("\n\n");

    printf("\n\nSaida dos multiplos de 3\n");
    for(int i = 0; i < TAM; i++){
        if(vetor[i] % 3 == 0){
            printf("Valor %2d e a sua posicao %d.\n ", vetor[i], i);
        }
    }

    return 0;
}
