/*Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis 
(cédulas) no qual o valor pode ser decomposto. As notas consideradas 
são de 100, 50, 20, 10, 5, 2 e 1. 
A seguir mostre o valor lido e a relação de notas necessárias.*/

#include <stdio.h>

int main(){

    int valor, total = 0, cedulas = 0;

    printf("\nDigite o valor da quantia do saque: ");
    scanf("%d", &valor);

    while (valor > 0){
       if(valor >= 100){
              
            cedulas = valor / 100;
            valor = valor % 100;
            total += cedulas;
            printf("\n%d celular de R$100\n", total);
       }
       else 
        if(valor >= 50){
              
            cedulas = valor / 50;
            valor = valor % 50;
            total += cedulas;
       }
       else 
        if(valor >= 20){
              
            cedulas = valor / 20;
            valor = valor % 20;
            total += cedulas;
       }
       else 
        if(valor >= 10){
              
            cedulas = valor / 10;
            valor = valor % 10;
            total += cedulas;
       }
       else 
        if(valor >= 2){
              
            cedulas = valor / 2;
            valor = valor % 2;
            total += cedulas;
       }
       else 
        if(valor >= 1){
              
            cedulas = valor / 1;
            valor = valor % 1;
            total += cedulas;
       }
       
    } // Fim while
     printf("\n\nLevando cedulas = %d\n", total);

    return 0;
}