#include <stdio.h>
#include <stdlib.h>
//Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de programacion 1
int main()
{
    int i;
    float nota, promedio, sumaNota;

    sumaNota = 0;
    promedio = 0;
    for(i = 0; i < 7; i++){
        printf("Ingrese calificaciones de programacion 1: "); scanf("%f", &nota);
        sumaNota+= nota;
    }
    promedio = sumaNota / 7;

    printf("El promedio es: %g", promedio);

    return 0;
}
