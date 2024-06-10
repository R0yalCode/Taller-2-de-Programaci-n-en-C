// Producto de una serie de números fraccionarios
#include <stdio.h>

// Función para calcular el producto de la serie de números fraccionarios
float producto_serie_fraccionaria(int n) {
    float producto = 1.0;

    // Utilizamos un bucle for para iterar sobre los términos de la serie y multiplicarlos, es adecudo porque el número de términos esta determinado por n.
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }

    return producto;
}

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Llamamos a la función para calcular el producto de la serie fraccionaria
    float resultado = producto_serie_fraccionaria(n);
    printf("El producto de la serie de numeros fraccionarios hasta %d es %.6f.\n", n, resultado);

    return 0;
}