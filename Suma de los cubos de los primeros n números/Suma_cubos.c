// Suma de los cubos de los primeros n números 
#include <stdio.h>

// Función para calcular la suma de los cubos de los primeros n números
int suma_cubos(int n) {
    int suma = 0;

    // Utilizamos un bucle for para iterar sobre los números del 1 al n, es adecuado en este caso porque el número de iteraciones esta determinado por n.
    for (int i = 1; i <= n; i++) {
        suma += i * i * i;
    }

    return suma;
}

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Llamar a la función para calcular la suma de los cubos
    int resultado = suma_cubos(n);
    printf("La suma de los cubos de los primeros %d numeros es %d.\n", n, resultado);

    return 0;
}