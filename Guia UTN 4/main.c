#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;

    printf("Ingrese el primer numero\n"); scanf("%d", &n1);
    printf("Ingrese el segundo numero\n"); scanf("%d", &n2);

    if(n1 >= n2){
        printf("%d\n", n1);
        printf("%d\n", n2);
    }
    else{
        printf("%d\n", n2);
        printf("%d\n", n1);
    }

    return 0;
}
