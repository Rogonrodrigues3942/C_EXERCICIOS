/*8. Gerar um vetor randômico de 100 posições, com valores de 0 a 1000. Verificar 
e mostrar quantas vezes aparece o número 500 e em quais posições ele aparece.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 100

int main(){
    int vetRandom[tam] = {0};
    int cont = 0;

    srand(time(0));
    printf("\n\n");

    for(int i = 0; i < tam; i++){
        vetRandom[i] = 1 + rand() % 1001;
        if(vetRandom[i] == 500){
            printf("N.o = %d, posicao = %d\n ", vetRandom[i], i);
            cont++;
        }
    }

    if(cont > 0)
        printf("O n.o 500 aparece %d vezes.\n\n", cont);
    else
        printf("\nO n.o 500 nao aparece nenhuma vez.\n\n");
    
    return 0;
}