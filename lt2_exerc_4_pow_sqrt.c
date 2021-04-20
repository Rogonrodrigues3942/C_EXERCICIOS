/*Fac¸a um programa que leia um numero e, caso ele seja positivo, calcule e mostre: ´
• O numero digitado ao quadrado ´
• A raiz quadrada do numero digitado*/

#include <stdio.h>
#include <math.h>

int main(){

    int num, potencia;
    double raiz;

    printf("\n***Calcula o quadrado e raiz quadrada de um numero positivo***\n\n");
    
    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    if(num > 0){        
        potencia = pow(num, 2);
        raiz = sqrt(num);
        printf("quadrado: %d e a raiz: %7.4f\n\n", potencia, raiz);
    }

    return 0;
}