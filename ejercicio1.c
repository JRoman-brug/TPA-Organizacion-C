#include <stdio.h>
#include <stdlib.h>

int fechaValida(int dia, int mes, int anio){
    int toReturn;
    if(!(0<dia && dia<31)) toReturn = 0;
    else if(!((0<mes)&&(mes<13))) toReturn = 0;
    else if(!(0<anio)) toReturn = 0;
    else toReturn = 1;
    return  toReturn;
}

void imprimirFecha(int dia, int mes, int anio){
    printf("%i ",dia);
    switch(mes){
        case 1:{
            printf("enero");
            break;
        }
        case 2:{
            printf("febrero");
            break;
        }
        case 3:{
            printf("marzo");
            break;
        }
        case 4:{
            printf("abril");
            break;
        }
        case 5:{
            printf("mayo");
            break;
        }
        case 6:{
            printf("junio");
            break;
        }
        case 7:{
            printf("julio");
            break;
        }
        case 8:{
            printf("agosto");
            break;
        }
        case 9:{
            printf("septiembre");
            break;
        }
        case 10:{
            printf("octubre");
            break;
        }
        case 11:{
            printf("noviembre");
            break;
        }
        case 12:{
            printf("diciembre");
            break;
        }
    }
    printf(" del anio %i",anio);
}

void ejercicio1(){
    int dia=0, mes=0, anio=0;
    printf("Ingrese el dia: ");
    scanf("%i",&dia);
    printf("Ingrese el mes: ");
    scanf("%i",&mes);
    printf("Ingrese el anio: ");
    scanf("%i",&anio);

    if(fechaValida(dia,mes,anio) == 1){
        imprimirFecha(dia,mes,anio);
    }else{
        printf("Sos tonto?");
    }
}


