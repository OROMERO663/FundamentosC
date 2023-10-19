#include <stdio.h>

int main (int argc,char *argv[]){
    
    int edad =45;
    do{
        printf("Tu edad es menor que 60 anhos \n");
    }while(edad < 60);
    
    //Algo falla, se queda en bucle infinito, porque edad es siempre 45
    return 0;
}