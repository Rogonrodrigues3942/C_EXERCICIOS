/*Apresentar os números impares na faixa de 0 a 20. Capitulo 5 - livro*/

#include <stdio.h>

int main(){

    int i = 0, res;

    do{
        if (i % 2 == 1)
            printf("%d ", i);
        i++;
    }
    while(i <= 20);

    return 0;
}