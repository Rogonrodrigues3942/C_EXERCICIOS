/*1. Criar um vetor para armazenar números pares e outro para armazenar números 
ímpares. Pedir para o usuário digitar 10 números, armazenando-os nos vetores 
criados, conforme a sua paridade. Mostrar os vetores obtidos.*/

#include <stdio.h>


int main(){
    int num;
    int parCont = 0, imprCont = 0;
    int par[parCont], impar[imprCont];

    printf("\n\nVetor dos pares e Vetor dos impares\n\n");

    //Entrada e processamento
    for (int i = 0; i < 10; i++){
        printf("Digite o %d.o numero: ", i + 1);
        scanf("%d", &num);

        if( num % 2 == 0){
            par[parCont] = num;
            parCont++;
        }
        else{
            impar[imprCont] = num;
            imprCont++;
        }
        
    }

    //Saida dos vetores par e impar
    printf("\n\n vetor par = {");
    for(int i = 0; i <= parCont; i++)
        printf("%d ", par[i]);
    printf("}\n");

    printf("\n vetor impar = {");
    for(int i = 0; i <= imprCont; i++)
        printf("%d ", impar[i]);
    printf("}\n");

    return 0;
}