#include <stdio.h>
#include <stdlib.h>
//Leer 10 numeros y obtener su cubo y su cuarta
int main()
{
    int num, cubo, cuarta, i;

    cubo = 0;
    cuarta = 0;
    for(i = 0; i < 10; i++){
        printf("Ingrese un numero: "); scanf("%d", &num);
        cubo = num * num * num;
        cuarta = cubo * num;
        printf("\nCubo: %d\nCuarta: %d\n", cubo, cuarta);
    }

    return 0;
}
