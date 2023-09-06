#include <stdio.h>
#include <stdlib.h>

void ejercicio4(){
    long int aux = 0, maxNum = 0, minNum = 0, suma = 0, cont=0, promedio = 0;


    printf("Ingrese la secuencia de numeros: ");
    scanf("%i", &aux);

    while(aux != -1){
        if(aux>maxNum)
            maxNum = aux;
        if(aux<minNum)
            minNum = aux;
        suma +=aux;
        cont++;
        scanf("%i", &aux);
    }
    promedio = suma/cont;

    printf("el numero maximo es: %i \n",maxNum);
    printf("el numero minumo es: %i \n",minNum);
    printf("el promedio de la secuencia es: %i \n",promedio);

}
