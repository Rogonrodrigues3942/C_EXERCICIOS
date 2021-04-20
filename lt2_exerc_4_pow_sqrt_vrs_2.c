/*Faça um programa que leia um número e, caso ele seja positivo, 
calcule e mostre: o número digitado ao quadrado.
A raiz quadrada do número digitado.*/

#include <stdio.h>
#include <math.h>

int main(){

    float num;

    printf("\n\nCalcule a raiz ou o quadrado\n\n");
    printf("Digite um numero qualquer: ");
    scanf("%f", &num);

    if(num >= 0){
        printf("A raiz quadrada de %8.4f en %8.4f", num, sqrt(num));
        printf("\nA potencia de %8.4f eh: %8.4f \n", num, pow(num,2));

    }
    else
    {
        printf("Numero negativo, invalido!!\n");
    }
    
    return 0;
}