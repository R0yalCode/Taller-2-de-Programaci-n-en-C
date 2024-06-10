// Suma de los cuadrados de los primeros n números
#include <stdio.h>

// Función para calcular la suma de los cuadrados de los primeros n números
int suma_cuadrados(int n) {
    int suma = 0;

    // Utilizamos un bucle for para iterar sobre los números del 1 al n, es adecuado porque el número de iteraciones está determinado por n.
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }

    return suma;
}

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Llamar a la función para calcular la suma de los cuadrados
    int resultado = suma_cuadrados(n);
    printf("La suma de los cuadrados de los primeros %d numeros es %d.\n", n, resultado);

    return 0;
}