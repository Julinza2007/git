#include <stdio.h>

int main() {
    int calificacion;
    
    printf("Ingrese su calificacion en el examen (de 0 a 100): ");
    scanf("%d", & calificacion);
   
    if (calificacion >= 0 && calificacion <= 100) {
        if (calificacion >= 60) {
            printf("Felicidades, has aprobado el examen\n");
        } else {
            printf("Lo siento, has desaprobado el examen\n");
        }
    } else {
        printf("Error en la introduccion de datos: la calificacion debe estar entre 0 y 100 \n");
    }


