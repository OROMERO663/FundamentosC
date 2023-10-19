#include <stdio.h>

int main (int argc,char *argv[]){
    int edad = 45;//si pones un INT por ejemplo, a la hora de imprimir tienes que decir que lo que imprimes es un entero
    printf("Mi edad es de %i anhos \n", edad);
    edad++;
    printf("Mi edad es de %i anhos \n", edad);
    edad--;
    printf("Mi edad es de %i anhos \n", edad);
    edad+=2;
    printf("Mi edad es de %i anhos \n", edad);
    edad-=2;
    printf("Mi edad es de %i anhos \n", edad);
    edad*=2;
    printf("Mi edad es de %i anhos \n", edad);
    edad/=2;
    printf("Mi edad es de %i anhos \n", edad);
    
    
    
    
    return 0;
}