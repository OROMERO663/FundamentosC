#include <stdio.h>

int main (int argc,char *argv[]){
    int edad = 45;//si pones un INT por ejemplo, a la hora de imprimir tienes que decir que lo que imprimes es un entero
    printf("Mi edad es de %i años \n", edad);
    
    float altura =1.78;
    printf("Mi altura es de %f metros \n", altura);
    
    char letra = 'A';
    printf("Mi letra favorita es la %c \n", letra);
    //array de caracteres
    char cadena[] = "Oscar Romero";
    printf("Mi nombre es %s \n", cadena);//el %s es de string
    
    return 0;
}