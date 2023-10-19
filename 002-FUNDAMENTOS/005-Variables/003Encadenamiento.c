#include <stdio.h>
#include <string.h> //importar la libreria de Strings

int main (int argc,char *argv[]){
    char nombre[] = "Oscar ";
    char apellidos[] = "Romero Espinosa";
    
    strcat(nombre,apellidos);
    printf("Mi nombre completo es: %s", nombre);
    
    return 0;
}