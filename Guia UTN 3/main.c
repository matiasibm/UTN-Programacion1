#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horasTrab,salarioFinal;

    printf("Ingrese  la cantidad de horas trabajadas\n"); scanf("%d", &horasTrab);

    if(horasTrab <= 40){
        salarioFinal = horasTrab * 300;
    }
    else{
        salarioFinal = ((horasTrab - 40) * 400) + (40 * 300);
    }

    printf("Su salario semanal es de $%d\n", salarioFinal);

    return 0;
}
