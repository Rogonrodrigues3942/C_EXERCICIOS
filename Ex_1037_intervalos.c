#include <stdio.h>

int main(){

    float valor;

    printf("\nInsira um valor qualquer real:  ");
    scanf("%f", &valor);

    if(valor >=0 && valor <= 100){
        if (valor >= 0 && valor <= 25){
            printf("Intervalo: [0, 25].\n");
        }
        else 
            if (valor > 25 && valor <= 50){
                printf("\nIntervalo: (25, 50].\n");
            }
        else
            if (valor > 50 && valor <= 75){
                printf("\nIntervalo: (50, 75].\n");
            }
        else
            if (valor > 75 && valor <= 100){
                printf("\nIntervalo: (75, 100].\n", valor);
            }
    }
    else
        printf("Fora do intervalo.\n");

    return 0;
}