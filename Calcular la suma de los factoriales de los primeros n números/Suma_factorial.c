// Calcular la suma de los factoriales de los primeros n números
#include <stdio.h>

// Función para calcular el factorial de un número
int factorial(int num) {
    int result = 1;

    // Calculamos el factorial del número
    for (int i = 1; i <= num; i++) {
        result *= i;
    }

    return result;
}

// Función para calcular la suma de los factoriales de los primeros n números
int suma_factoriales(int n) {
    int suma = 0;

    // Utilizamos un bucle for para iterar sobre los números del 1 al n y calcular el factorial de cada número, luego sumarlos. Es adecuado en este caso porque el número de iteraciones está determinado por n.
    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
    }

    return suma;
}

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Llamamos a la función para calcular la suma de los factoriales
    int resultado = suma_factoriales(n);
    printf("La suma de los factoriales de los primeros %d numeros es %d.\n", n, resultado);

    return 0;
}