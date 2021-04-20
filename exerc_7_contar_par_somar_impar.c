/*7 - Gerar um vetor randômico de 100 posições, com valores de 0 a 1000. Verificar e 
mostrar quantos são os pares. Calcular e mostrar a soma dos ímpares*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 100

int main(){

    int unidade[tam] = {0};
    int contPar = 0, contImpar = 0, soma = 0;

    srand(time(0));

    printf("\n\nNumeros impares: \n");

    for (int i = 0; i < tam; i++){
        unidade[i] = 1 + rand() % 1001;
        if(unidade[i] % 2 == 0)
            contPar++;
        else
        {
            printf("%d ", unidade[i]);
            soma += unidade[i];
            if((contImpar+1) % 10 == 0)
                printf("\n");
             contImpar++;   
        }
    }

    printf("\n\nHa %d numeros pares\n", contPar);
    printf("Soma numeros impares: %d\n", soma);

    return 0;
}