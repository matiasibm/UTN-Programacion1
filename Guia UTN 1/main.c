#include <stdio.h>
#include <stdlib.h>

int main()
{
    int examen1,examen2,examen3,promedio;

    printf("Ingrese la nota de su primer parcial\n"); scanf("%d", &examen1);

    printf("Ingrese la nota de su segundo parcial\n"); scanf("%d", &examen2);

    printf("Ingrese la nota de su tercer parcial\n"); scanf("%d", &examen3);

    promedio = (examen1 + examen2 + examen3) / 3;

    if(promedio >= 7){
        printf("Aprobado\n");
    }
    else{
        printf("Desaprobado\n");
    }

    return 0;
}
