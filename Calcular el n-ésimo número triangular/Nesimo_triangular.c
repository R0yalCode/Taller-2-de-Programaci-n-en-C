// Calcular el n-ésimo número trinagular 
#include <stdio.h>

// Función para calcular el n-ésimo número triangular
int numero_triangular(int n) {
    int suma = 0;

    // Utilizamos un bucle for para iterar desde 1 hasta n y sumar los números en cada iteración para obtener el número triangular, es adecuado en este caso porque el número de iteraciones esta determinado por n.
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    return suma;
}

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Llamar a la función para calcular el número triangular
    int triangular = numero_triangular(n);
    printf("El %d-esimo numero triangular es %d.\n", n, triangular);

    return 0;
}