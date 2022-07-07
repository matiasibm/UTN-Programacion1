#include <stdio.h>
#include <stdlib.h>
//Suponga que se tiene un conjunto de  calificaciones de un grupo de 40 alumnos.
//Realizar un algoritmo para calcular la calificacion promedio y la clasificacion mas baja de todo el grupo
int main()
{
    int califAlumnos, califMasBaja, i, sumaCalif;
    float promedioGrupo;

    sumaCalif = 0;
    califMasBaja = 11;
    promedioGrupo = 0;
    for(i = 0; i < 40; i++){
        printf("Ingrese calificacion: "); scanf("%d", &califAlumnos);
        if(califAlumnos < califMasBaja)
            califMasBaja = califAlumnos;
        sumaCalif += califAlumnos;
        promedioGrupo = sumaCalif / 40;

    }
    printf("%g y %d", promedioGrupo, califMasBaja);

    return 0;
}
