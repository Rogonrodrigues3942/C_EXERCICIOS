#include <stdio.h>

int main(){

    int tempo = 0, tm = 60, segundos = 0, n;

    printf("Insira numero inteiro: ");
    scanf("%d", &n);

    if (n >= 0){

        tempo =  n / tm;
        segundos = n - tempo*tm;
        printf("%dm:%d", tempo, segundos);

    }

    return 0;
}