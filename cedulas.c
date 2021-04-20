#include <stdio.h>

int main(){

     int valor, resto= 0, total = 0, cedulas = 0;

    printf("Digite o valor da quantia do saque: ");
    scanf("%d", &valor);
   
    cedulas = valor / 100;
    valor = valor % 100;

    printf(" cedulas = %d,  valor = %d", cedulas, valor );
    return 0;
}
