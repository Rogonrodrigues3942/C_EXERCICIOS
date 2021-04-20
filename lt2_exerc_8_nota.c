#include <stdio.h>

int main(){

    float nt1, nt2, md = 0;

    printf("\n******\nCalcular Media de Aluno\n************\n");
    printf("Insira a primeira nota: ");
    scanf("%f", &nt1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nt2);

    if(nt1 < 0 || nt1 >10){
        printf("\nprimeira nota invalida! programa encerrado!\n");
        return 0;
    }else if(nt2 < 0 || nt2 >10){
        printf("\nsegunda nota invalida! programa encerrado!\n");
        return 0;
    }
    else
    {
        printf("\nNotas validas\n");
        md = (nt1 + nt2) / 2;
        printf("A media eh: %7.2f\n", md);
    }
    
    return 0;
}