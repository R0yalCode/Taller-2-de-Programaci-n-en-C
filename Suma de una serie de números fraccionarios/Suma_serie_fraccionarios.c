// Suma de una serie de números fraccionarios
#include <stdio.h>

// Función para calcular la suma de la serie de números fraccionarios
float suma_serie_fraccionaria(int n) {
    float suma = 0.0;

    // Utilizamos un bucle for para iterar sobre los términos de la serie, es adecuado este bucle por que el número de terminos esta determinado por n.
    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }

    return suma;
}

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Llamar a la función para calcular la suma de la serie fraccionaria
    float resultado = suma_serie_fraccionaria(n);
    printf("La suma de la serie de numeros fraccionarios hasta %d es %.2f.\n", n, resultado);

    return 0;
}