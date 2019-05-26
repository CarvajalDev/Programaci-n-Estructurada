#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Operadores Aritmeticos:

    int sum;
    int res;
    float mult;
    float div;
    int modu;

    sum = 5+5;
    res = 32 - 24;
    mult = 3.5 * 9.2;
    div = 9.2 / 26.666;
    modu = 8 % 13;

    printf("El resultado de la suma es: %i \n", sum);
    printf("El resultado de la resta es: %i \n", res);
    printf("El resultado de la multiplicacion es: %f \n", mult);
    printf("El resultado de la division es: %f \n", div);
    printf("El modulo es: %i", modu);


    //Reto Area de un Cilindro:


    float radio, altura, area,volumen, diametro;
    float pi = 3.14;

    printf("Escribe la altura del cilindro: ");
    scanf("%f", &altura);

    printf("Escribe la base del cilindro: ");
    scanf("%f", &diametro);

    radio = diametro / 2;

    area = 2 * pi * radio * (radio + altura);
    printf("El Area del Cilindro es: %f cm cuadrados \n", area);

    volumen = pi * (radio * radio) * altura;
    printf("El Volumen del Cilindro es: %f", volumen);

    //Reto Fahrenheit:

    float fahrenheit, celcius;

    printf("¡Vamos a convertir grados Fahrenheit en grados Celcius! \n Escribe los grados °F: ");
    scanf(" %f", &fahrenheit);

    celcius = (fahrenheit - 32) / 1.8;

    printf("%f grados Fahrenheit, son: %f °C", fahrenheit, celcius);


    return 0;
}
