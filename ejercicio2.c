#include <stdio.h>
#include <stdlib.h>

void ejercicio2(){
    int segundos = 0;
    int horas = 0, minutos = 0;
    printf("Pone la cantidad de segundos: ");
    scanf("%i", &segundos);

    horas = segundos/3600;
    segundos-=3600*horas;

    minutos = segundos/60;
    segundos-=minutos*60;

    printf("%i:%i:%i",horas,minutos,segundos);
}
