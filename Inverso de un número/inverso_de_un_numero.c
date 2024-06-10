//Inverso de un numero
#include <stdio.h>

// Función para invertir un número utilizando diferentes bucles.
int inverso_numero(int numero)
{
    int inverso = 0;

    // Usamos un bucle do-while para asegurarnos de que al menos una vez se ejecutará. Esto es util en caso de que el numero sea 0, ya que el bucle while o for no ejecutaria su cuerpo si la condición inicial no se cumple.

    do
    {
        inverso = inverso * 10 + (numero % 10);
        numero /= 10;
    } while (numero > 0);

    return inverso;
}

// Función principal
int main()
{
    int numero = 12567;
    int resultado = inverso_numero(numero);


    // Se utiliza el bucle for para presentar y demostrar cómo se puede iterar sobre los dígitos de un número.
    printf("El inverso del numero %d es ", numero);
    int temp = resultado;
    for (; temp > 0; temp /= 10)
    {
        printf("%d", temp % 10);
    }
    printf(".\n");


    return 0;
}