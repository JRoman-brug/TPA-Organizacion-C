#include<stdio.h>
#include<stdlib.h>

int palidroma(char* palabra, int length){
    if(length == 0 || length == 1) return 1;
    else if(palabra[0] == palabra[length-1]) return palidroma(palabra[1], length-2);
    else return 0;
}



void ejercicio10(){
    char palabra[10];
    printf("Ingrese una palabra: ");
    scanf("%s",palabra);

    if(palidroma(palabra, strlen(palabra))) printf("lo es");
    else printf("no lo es");

}
