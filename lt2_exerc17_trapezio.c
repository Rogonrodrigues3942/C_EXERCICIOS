#include <stdio.h>

int main(){

    float area, bmenor, bmaior , h;

    printf("\n*****\nCalcule a area do trapezio\n*********\n\n");

    printf("Digite um valor para base menor: ");
    scanf("%f", &bmenor);
    printf("Digite um valor para base maior: ");
    scanf("%f", &bmaior);
    printf("Digite um valor para altura: ");
    scanf("%f", &h);

    if(bmenor <= 0){
        printf("Valor da base menor deve ser maior que zero! \nValor invalido. Programa encerrado!");
        return 0;
    }
    else if(bmaior <= 0){
        printf("Valor da base maior deve ser maior que zero! \nValor invalido. Programa encerrado!");
        return 0;
    }
    else{
        area = ((bmenor + bmaior) * h) / 2;
        printf("Valores da base menor e maior validos, a area eh: %8.3f\n\n", area);
    }


    return 0;
}