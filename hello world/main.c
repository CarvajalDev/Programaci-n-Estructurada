#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //libreria para valor booleano

int main()
{
    //definimos variables:

    int edad = 22;
    float estatura = 1.80;
    double distancia = 18.5;
    char letraFavorita = 'H';
    bool meAma = true;  */

    // imprimo las variables:

    printf("Yo tengo: %i anios \n", edad);
    printf("Mi estatura es: %f metros \n", estatura);
    printf("Mi nombre comienza por: %c \n" , letraFavorita);
    printf("La distancia que recorriste fue: %f km", distancia);    */

    //Almaceno variables con un input:

    char talla;
    int edad;
    float estatura;
    float peso;

    printf("Cual es tu talla de camisa: ");
    scanf("%c", &talla);

    printf("Cual es tu edad: ");
    scanf("%i", &edad);

    printf("Cuanto mides: ");
    scanf("%f", &estatura);

    printf("cual es tu peso: ");
    scanf(" %f", &peso);
    printf("\n");


    printf("------------------------------------------ \n");
    printf("\n");

    printf("tu talla de ropa es: %c \n", talla);
    printf("Tu edad es: %i \n", edad);
    printf("Tu estatura es: %f \n", estatura);
    printf("Tu peso es: %f \n", peso);

    //reto Variable Auxiliar:


    int variableX;
    int variableY;
    int variableAuxiliar;

    printf("Valor de x: ");
    scanf("%i", &variableAuxiliar);

    printf("valor de y: ");
    scanf("%i", &variableX);

    variableY = variableAuxiliar;

    printf("El valor intercambiado de x: %i \n", variableX);
    printf("El valor intercambiado de y: %i", variableY);

    return 0;
}
