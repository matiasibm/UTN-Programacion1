#include <stdio.h>
#include <stdlib.h>

int main()
{
    int camisasComp;
    float totalComp,totalConDesc;

    printf("Ingrese la cantidad de camisas compradas\n"); scanf("%d", &camisasComp);
    printf("Ingrese el total de la compra\n"); scanf("%g", &totalComp);

    if(camisasComp >= 3){
        totalConDesc = totalComp - (totalComp * 0.2);
    }
    else{
        totalConDesc = totalComp - (totalComp * 0.1);
    }

    printf("Usted debera abonar $%g", totalConDesc);

    return 0;
}
