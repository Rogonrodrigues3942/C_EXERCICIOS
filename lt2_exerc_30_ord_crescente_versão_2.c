#include <stdio.h>

int main(){

    int a, b, c, aux;
    printf("\nxxxxxx\nClassificacao em ordem crescente\nxxxxxxxxxxx\n\n");

    printf("Insira o primeiro numero: ");
    scanf("%d", &a);
    printf("Insira o segundo numero: ");
    scanf("%d", &b);
    printf("Insira o terceiro numero: ");
    scanf("%d", &c);

    while( a > b || b > c || a > c ){
        if ( a > b ) {
            aux = a;
            a = b;
            b = aux;
        }
        else
            if( b > c) {
                aux = b;
                b = c;
                c = aux;
            }
        else{
            aux = a;
            a = c;
            c = aux;
        }

    }
            printf("\nOs numeros em ordem crescente: %d, %d e %d.\n\n", a, b, c);

    return 0;
}