#include <stdio.h>
#include <stdlib.h>
//Calcular e imprimir  la tabla de multiplicar de un numero cualquiera. Imprimir el multiplicando, el multiplicador y el producto

int main()
{
    int i, j, num;

    printf("Ingrese un numero: "); scanf("%d", &num);

    for(i = num; i <= num; i++){
        for(j = 1; j <= 10; j++){
            printf("\n %3d x %d = %d", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
