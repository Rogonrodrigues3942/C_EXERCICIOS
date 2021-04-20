/*Pedir para o usuário preencher dois vetores com 5 posições cada um. Criar um 
vetor com 10 posições, intercalando os elementos dos dois vetores anteriores. 
Mostrar os três vetores.*/

#include <stdio.h>

#define menor 5
#define maior 10

int main(){

    int vetorA[menor], vetorB[menor], vetorMix[maior];
    int num, i;

    printf("\nPopule os vetorA.\n");
    for(int i = 0; i < menor; i++){
        printf("Digite o %d.o valor: ", i + 1);
        scanf("%d", &num);
        vetorA[i] = num;
    }

    printf("\nPopule os vetorB.\n");
    for(int i = 0; i < menor; i++){
        printf("Digite o %d.o valor: ", i + 1);
        scanf("%d", &num);
        vetorA[i] = num;
    }

    //Prenchendo vetorMix

    i = 0;

    while(i < maior){

        if( i % 2 == 0){
            for(int j = 0; j < menor; j++)
                vetorMix[i] = vetorA[j];
        }
        else{
            for(int j = 0; j < menor; j++)
                vetorMix[i] = vetorB[j];
        }
        i++;
    }

    for(int  i = 0; i < maior; i++)
        printf("%d ", vetorMix[i]);

    return 0;
}