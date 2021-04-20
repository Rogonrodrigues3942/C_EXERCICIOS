#include <stdio.h>

int main(){

    int ini, fim, sentinela = 0;

    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &ini);
    printf("Digite o valor final do intervalo: ");
    scanf("%d", &fim);

    if( ini > fim){
        while(sentinela <= ini){
            printf("%d ", fim);
            sentinela = fim++;
        }
    }
    else{
        while(sentinela <= fim)
        {
            printf("%d ", ini);
            sentinela = ini++;
        }
    }

    return 0;
}