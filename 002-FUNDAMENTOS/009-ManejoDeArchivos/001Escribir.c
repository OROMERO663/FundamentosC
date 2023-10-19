#include <stdio.h>

int main (int argc,char *argv[]){
    
    FILE *archivo; //apertura de un archivo
    
    archivo = fopen("agenda.txt","w"); //el archivo tiene nombre y se abre en modo escritura
    fprintf(archivo,"Esto es un texto de prueba \n"); //escribo en el archivo
    fclose(archivo); //cierro el archivo
    return 0;
}

