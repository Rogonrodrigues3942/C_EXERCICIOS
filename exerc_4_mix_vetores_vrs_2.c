/*4 - Pedir para o usuário preencher dois vetores com 5 posições cada um. Criar um 
vetor com 10 posições, intercalando os elementos dos dois vetores anteriores. 
Mostrar os três vetores.*/

#include <stdio.h>

#define menor 5
#define maior 10

int main(){

    int vetorA[menor], vetorB[menor];
    int vetorMix[maior];
    int num, p;

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
        vetorB[i] = num;
    }

    //Prenchendo vetorMix
    p = 0;
    for (int i = 0; i < menor; i++){
          vetorMix[p] = vetorA[i];
          p +=2;
    }

    p = 1;
    for (int i = 0; i < menor; i++){
          vetorMix[p] = vetorB[i];
          p +=2;
    }

    printf("\n\nMostre o VetorMix = ");

    for(int  i = 0; i < maior; i++)
        printf("%d ", vetorMix[i]);

    return 0;
}