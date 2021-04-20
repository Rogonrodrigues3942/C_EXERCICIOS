/*6 - Gerar um vetor randômico de 100 posições, com valores de 0 a 1000. Calcular e 
mostrar a média dos elementos*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 100

int main(){

    
    int frequencia[tam] = {0};
    int soma = 0, media = 0;

    srand(time(0));

    for( int i = 0; i < tam; i++){
        if(i % 10 == 0)
            printf("\n");

        frequencia[i] = 1 + rand() % 1001;
        printf("%d ", frequencia[i]);
        soma += frequencia[i];
    }

    media = soma / tam;

    printf("\n\nO valor da soma dos valores: %d.\n\n", soma);
    printf("O valor da media dos valores: %d.\n\n", media);

    return 0;
}