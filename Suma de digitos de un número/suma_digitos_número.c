
#include <stdio.h>

// Función para sumar los dígitos de un número utilizando diferentes bucles.
int suma_digitos(int numero)
{
    int suma = 0;

    // Usamos un bucle do-while para asegurar que al menos una vez se ejecute. Esto es util en caso de que el numero sea 0, ya que el bucle while o for no ejecutaria su cuerpo si la condición inicial no se cumple. 
    do
    {
        suma += numero % 10;
        numero /= 10;
    } while (numero > 0);

    return suma;
}

int main()
{
    int numero = 12567;
    int resultado = suma_digitos(numero);

    // Imprimir la suma de los dígitos usando un bucle for, demostrando cómo se puede iterar sobre los dígitos de un número.
    
    printf("La suma de los digitos de %d es ", numero);
    for (int i = resultado; i > 0; i /= 10)
    printf("Utilizando for para presentar: %d\n", resultado);

    return 0;
}