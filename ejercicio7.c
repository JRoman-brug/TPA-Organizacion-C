#include <stdio.h>
#include <stdlib.h>
int parContarParesEnImpares();
int imparContarParesEnImpares();

int cantDigitos(int numero){
    if(numero<10) return 1;
    else return 1+cantDigitos(numero/10);
}

int contarVecesD(int numero, int digito){
    if(numero<10){
        if(numero == digito) return 1;
        else return 0;
    }else{
        if((numero % 10) == digito) return 1+contarVecesD(numero /10, digito);
        else return contarVecesD(numero /10, digito);
    }
}

int parContarParesEnImpares(int numero){
    if(numero<10) return 0;
    else return imparContarParesEnImpares(numero/10);
}
int imparContarParesEnImpares(int numero){
    if(numero<10){
        if(numero%2 == 0) return 1;
        else return 0;
    }else{
        if((numero%10)%2 == 0) return 1+parContarParesEnImpares(numero/10);
        else return parContarParesEnImpares(numero/10);
    }
}

void ejercicio7(){
    int opcion = 0;
    int numero = 0;
    int digito = 0;
    printf("elegi inciso: ");
    scanf("%i", &opcion);

    printf("\n");
    switch(opcion){
        case 1:{
            printf("Ingresa un numero:");
            scanf("%i", &numero);
            printf("\nLa catidad de digitos que tiene el numero %i, es: %i ", numero, cantDigitos(numero));
            break;
        }
        case 2:{
            printf("Ingresa un numero:");
            scanf("%i", &numero);
            printf("Ingresa un digito:");
            scanf("%i", &digito);

            printf("\nLa catidad de veces que aparece el digito %i en el numero %i, es: %i ",digito , numero, contarVecesD(numero, digito));
            break;
        }
        case 3:{
            printf("Ingresa un numero:");
            scanf("%i", &numero);
            printf("\nLa  cantidad de digitos pares que ocupan posiciones impares del numero %i es %i", numero, imparContarParesEnImpares(numero));
            break;
        }

    }
}
