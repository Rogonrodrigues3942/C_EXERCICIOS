/*Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis 
(cédulas) no qual o valor pode ser decomposto. As notas consideradas 
são de 100, 50, 20, 10, 5, 2 e 1. 
A seguir mostre o valor lido e a relação de notas necessárias.*/

#include <stdio.h>

int main(){

    int valor, total = 0, moedas = 0, cedulas = 0;

    printf("\nDigite o valor da quantia do saque: ");
    scanf("%d", &valor);

    while (valor > 0){
       if(valor >= 100){
              
            cedulas = valor / 100;
            valor = valor % 100;
            printf("\n%d cedula(s) de R$ 100\n", cedulas);
       }
       else 
        if(valor >= 50){
              
            cedulas = valor / 50;
            valor = valor % 50;
            printf("\n%d cedula(s) de R$ 50,00.\n", cedulas);

       }
       else 
        if(valor >= 20){
              
            cedulas = valor / 20;
            valor = valor % 20;
            printf("\n%d cedula(s) de R$ 20,00.\n", cedulas);
       }
       else 
        if(valor >= 10){
              
            cedulas = valor / 10;
            valor = valor % 10;
            printf("\n%d cedula(s) de R$10.\n", cedulas);
       }
        else 
        if(valor >= 5){
              
            cedulas = valor / 5;
            valor = valor % 5;
            printf("\n%d cedula(s) de R$ 5,00.\n", cedulas);

       }
       else 
        if(valor >= 2){
              
            cedulas = valor / 2;
            valor = valor % 2;
            printf("\n%d cedula(s) de R$ 2,00.\n", cedulas);

       }
       else 
        if(valor >= 1){
              
            moedas = valor / 1;
            valor = valor % 1;
            total += moedas;
            printf("\n%d moeda de R$ 1,00.\n", moedas);
       }
       
    } // Fim while

    return 0;
}