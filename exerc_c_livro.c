//Tabuada no formato padrão - capitulo 5

#include <stdio.h>

int main(){

    int i, tab, prod;

    printf("Escolha a tabuada: ");
    scanf("%d", &tab);

    for(i = 0; i < 11; i++){
        prod = i * tab;
        printf("%d x %2d = %2d\n", tab, i, prod);
    }

    return 0;
}