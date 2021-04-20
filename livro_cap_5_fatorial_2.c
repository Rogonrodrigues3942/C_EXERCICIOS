/*Fatorial - usuário decidindo se continua o calculo.*/

#include <stdio.h>

int main(){

    int i = 1, resp = 1;
    long fatrl = 1;

    while(resp == 1){
        fatrl *= i;
       
        printf("\nDeseja continuar?");
        printf("\nDigite [1] para sim ou digite[2] para finalizar: ");
        scanf("%d", &resp);
        i++;

    }

    printf("\nO fatorial de %d corresponde a: %d.\n", i-1, fatrl);

    return 0;
}