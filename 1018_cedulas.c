/*Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis 
(cédulas) no qual o valor pode ser decomposto. As notas consideradas 
são de 100, 50, 20, 10, 5, 2 e 1. 
A seguir mostre o valor lido e a relação de notas necessárias.*/

#include <stdio.h>

int main(){

    int valor, total = 0;

    printf("Digite o valor da quantia do saque: ");
    scanf("%d", &valor);

    while(valor > 0){
       if(valor > 100){
           total = valor % 100; 
           printf("Total de cedulas: %d\n", total);
       }
       
    }

   

    return 0;
}