#include<stdio.h>
#include<stdlib.h>

int parMediano(int numero);
int imparMediano(int numero);

int parMediano(int numero){
    if(numero<10)return -numero;
    else return -(numero%10)+imparMediano(numero/10);
}

int imparMediano(int numero){
    if(numero<10) return numero;
    else return (numero%10)+parMediano(numero/10);
}
void ejercicio8(){
    int numero;

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    printf("El mediano del numero %i es: %i", numero, imparMediano(numero));

}
