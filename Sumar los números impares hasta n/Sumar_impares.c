#include <stdio.h>

// Función para calcular la suma de los números impares hasta n
int suma_impares(int n) {
    int suma = 0;

    // Utilizamos un bucle for para iterar sobre los números del 1 al n, es adecuado ya que en cada paso se incrementa en 2, para sumar solo los números impares.
    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }

    return suma;
}

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Llamamos a la función para calcular la suma de los números impares
    int resultado = suma_impares(n);
    printf("La suma de los numeros impares hasta %d es %d.\n", n, resultado);

    return 0;
}