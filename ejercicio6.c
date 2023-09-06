#include<stdio.h>
#include<stdlib.h>

#define MAXLINE 20



int mapeoHexaToDecimal(char hexa){
    int toReturn = 0;
    switch (hexa){
        case '0':;
        case '1':;
        case '2':;
        case '3':;
        case '4':;
        case '5':;
        case '6':;
        case '7':;
        case '8':;
        case '9': {
            toReturn = hexa-48;
            break;
        }
        case 'A':{
            toReturn = 10;
            break;
        }
        case 'B':{
            toReturn = 11;
            break;
        }
        case 'C':{
            toReturn = 12;
            break;
        }
        case 'D':{
            toReturn = 13;
            break;
        }
        case 'E':{
            toReturn = 14;
            break;
        }
        case 'F':{
            toReturn = 15;
            break;
        }
    }
    return toReturn;
}

void ejercicio6(){
    char numHexa[MAXLINE];
    int numDecimal = 0, base16 = 1;
    int len = 0;

    fgets(numHexa,MAXLINE,stdin);
    len = strlen(numHexa)-1;

    int i=0;
    for(i=len-1 ;i>=0; i--){
        numDecimal += mapeoHexaToDecimal(numHexa[i])*base16;
        base16*=16;
    }
    printf("el numero es: %i", numDecimal);

}
