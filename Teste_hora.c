#include <stdio.h>

int main(){

    int tempo = 0, hora = 60, minutos = 0, n;

    printf("Insira numero inteiro: ");
    scanf("%d", &n);

    if (tempo  >= 0){

        tempo =  n / hora;
        minutos = n - tempo*hora;
        printf("%dh:%d", tempo, minutos);

    }

    return 0;
}