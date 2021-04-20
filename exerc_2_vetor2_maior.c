/*2. Preencher um vetor com 10 números quaisquer digitados pelo usuário. 
Criar um segundo vetor com os elementos que são maiores que 10 do primeiro. 
Mostrar os dois vetores.*/

#include <stdio.h>

int main(){

    int vetor1[10], vetor2[10];
    int num;
    int maior = 0;

    printf("\n\nVetor2 com valores maiores que o Vetor1\n\n");

    printf("Criando o vetor1[10] \n\n");
    for(int i = 0; i < 10; i++){
        printf("Digite o %d.o ", i+1);
        scanf("%d", &num);
        vetor1[i] = num;

    }
    
    //Descobrindo qual o maior valor das posições e criando vetor2.
    for(int i = 0; i < 10; i++)
        if(vetor1[i] > maior)
            maior = vetor1[i];

    for(int i = 0; i < 10; i++){        vetor2[i] = vetor1[i] + maior;
        if(vetor2[i] == maior)
            ++vetor2[i];
    }

    //saída do vetor1
    printf("\nVetor1 = [");
    for(int i = 0; i < 10; i++)
        printf("%d ", vetor1[i]);
    printf("]");

       //saída do vetor2
    printf("\nVetor2 = [");
    for(int i = 0; i < 10; i++)
        printf("%4d ", vetor2[i]);
    printf("]\n\n");

    return 0;
}