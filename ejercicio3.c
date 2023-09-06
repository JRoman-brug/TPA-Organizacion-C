#include <stdio.h>
#include <stdlib.h>


void celsiusToFahrenheit(){
    int celsius = 0;
    float fahrenheit = 0;

    printf("Ingrese los celsius: ");
    scanf("%i",&celsius);

    fahrenheit = celsius* 33.8;
    printf("\n%i celsius serian %f fahrenheit\n", celsius, fahrenheit);
}

void millaHoraToKMMinutos(){
    int millaHora = 0;
    float KMMinutos = 0;

    printf("Ingrese las millas/hora: ");
    scanf("%i",&millaHora);

    KMMinutos = millaHora * 1.609344;
    printf("\n%i celsius serian %f fahrenheit\n", millaHora, KMMinutos);
}

void litroKMToMillaGalon(){
    int litroKM = 0;
    float millaGalon = 0;

    printf("Ingrese las millas/hora: ");
    scanf("%i",&litroKM);

    millaGalon = litroKM * 0.2641720;
    printf("\n%i celsius serian %f fahrenheit\n", litroKM, millaGalon);
}

void ejercicio3(){
    int opcion = 1;

    printf("\n 1: celsius a Fahrenheit \n 2 milla/hora a km/minuto\n 3 litros/100km to milla por galon \n");
    printf("Ingrese que conversor usar: ");
    scanf("%i",&opcion);


    switch(opcion){
        case 1:{
            celsiusToFahrenheit();
            break;
        }
        case 2: {
            millaHoraToKMMinutos();
            break;
        }
        case 3: {
            litroKMToMillaGalon();
            break;
        }
    }
}
