#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr1,nr2,nr3,mayor;

    printf("Ingrese el primer numero\n");   scanf("%d", &nr1);
    printf("Ingrese el segundo numero\n"); scanf("%d", &nr2);
    printf("Ingrese el segundo numero\n"); scanf("%d", &nr3);
//
//    if((nr1 > nr2) && (nr1 > nr3))
//        printf("%d\n", nr1);
//    else if((nr2 > nr1) && (nr2 > nr3))
//        printf("%d\n", nr2);
//    else
//        printf("%d\n", nr3);

    if(nr1 > nr2)
        if(nr1 > nr3)
            mayor = nr1;
        else
            mayor = nr3;
    else
        if(nr2 > nr3)
            mayor = nr2;
        else
            mayor = nr3;

    printf( "%d es el mayor\n", mayor );

    return 0;
}


