// Encontrar el MCD
#include <stdio.h>

// Función para calcular el MCD (Máximo Común Divisor) 
int calcular_mcd(int a, int b) {
    int temp;

    // Utilizamos un bucle while, es apropiado este bucle por que no se conoce cuantas interaciones seran necesarias.
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Llamamos a la función para calcular el MCD
    int mcd = calcular_mcd(num1, num2);
    printf("El MCD de %d y %d es %d.\n", num1, num2, mcd);

    return 0;
}