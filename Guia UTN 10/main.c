#include <stdio.h>
#include <stdlib.h>
//Leer 10 numeros e imprimir solo los positivos
int main()
{
    int num, i;

    for(i = 0; i < 10; i++){
        printf("Ingrese un numero: "); scanf("%d", &num);
        if(num > 0){
                printf("%d\n", num);
        }
    }

    return 0;
}
