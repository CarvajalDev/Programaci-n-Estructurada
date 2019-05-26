#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor, resultado;

    valor = 25;
    resultado = --valor;

    printf("el valor es: %i", resultado);

    //Reto Incrementar valor de una Variable:


    int x = 10;

    x += x * 2 ;

    printf("el valor de X: %i", x);

    // Reto Operador de asignacion:

    int numero;

    printf("Ingresa un numero: ");
    scanf("%i", &numero);

    numero %= 5;

    numero++;

    printf("El resultado es: %i", numero);

    return 0;
}
