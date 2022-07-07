#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr1,nr2,resultado;

    printf("Ingrese el primer numero\n");   scanf("%d", &nr1);
    printf("Ingrese el segundo numero\n"); scanf("%d", &nr2);

    if(nr1 == nr2)
        resultado = nr1 * nr2;
    else if(nr1 > nr2){
        resultado = nr1 - nr2;
    else
        resultado = nr1 + nr2;

    printf("%d", resultado);

    return 0;
}
