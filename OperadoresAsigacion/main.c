#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores de asignacion: \n");

    int valor;

    valor = 12;

    printf("El valor de la variable es: %i \n", valor);

    valor = valor + 5;

    printf("El valor de la variable es: %i \n", valor);

    valor += 3;

    printf("El valor de la variable es: %i \n", valor);

    valor -= 5;

    printf("El valor de la variable es: %i \n", valor);

    valor *= 3;

    printf("El valor de la variable es: %i \n", valor);

    valor /= 5;

    printf("El valor de la variable es: %i \n", valor);

    valor %=3;

    printf("El valor de la variable es: %i \n", valor);

    return 0;
}
