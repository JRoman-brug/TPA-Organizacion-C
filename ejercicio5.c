#include <stdio.h>
#include <stdlib.h>

int potencia(int exponente, int numero){
    if(exponente == 0) return 1;
    else return numero*potencia(exponente-1, numero);
}

int binaryToDecimal(int binario, int exponente){
    return binario*potencia(exponente, 2);
}

void ejercicio5(){
    int numBinario = 0, numDecimal = 0, aux = 0, cont = 0;

    printf("Ingrese un numero binario: ");
    scanf("%i",&numBinario);

    while(numBinario != 0){
        //numBinario mod 10
        aux = numBinario % 10;

        numBinario = numBinario/10;

        numDecimal += binaryToDecimal(aux,cont);
        cont++;
    }
    printf("numero decimal: %i", numDecimal);

}
