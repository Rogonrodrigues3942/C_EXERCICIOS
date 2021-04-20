#include <stdio.h>

int main(){

    int horas = 0, th = 60, minutos = 0,  tm = 60, segundos = 0, ts;

    printf("Insira os segundos: ");
    scanf("%d", &ts);

    if (ts >= 0){

        minutos =  ts / tm;
        segundos = ts - minutos*tm;
        horas = minutos / th;
        minutos = minutos - horas*th;

        printf("%dh:%dm:%ds", horas,  minutos, segundos);

    }
    else
    {
        printf("Valor invalido!! Insira novo valor.");
    }
    

    return 0;
}