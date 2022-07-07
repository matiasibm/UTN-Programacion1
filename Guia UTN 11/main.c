#include <stdio.h>
#include <stdlib.h>
//Leer 15 numeros negativos y convertirlos a positivos e imprimir dichos numeros

int main()
{
    int num, i, numPositiv;

    for(i = 0; i < 15 ;i++){
        printf("Ingrese un numero: "); scanf("%d", &num);
            numPositiv = num * (-1);
            printf("%d\n", numPositiv);
    }

    return 0;
}
