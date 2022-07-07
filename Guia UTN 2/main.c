#include <stdio.h>
#include <stdlib.h>

int main()
{
    float importeInicial,importeFinal;

    printf("Ingrese el monto de su compra\n"); scanf("%g", &importeInicial);

    if(importeInicial >= 5000){
        importeFinal = importeInicial - (importeInicial * 0.2);
    }
    else{
        importeFinal = importeInicial;
    }

    printf("Usted debera pagar $%g\n", importeFinal);

    return 0;
}
