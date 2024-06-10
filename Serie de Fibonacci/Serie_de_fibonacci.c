#include <stdio.h>

// Función para imprimir los primeros n elementos de la serie de Fibonacci
void fibonacci(int n) {
    int a = 0, b = 1, temp;

    // Usamos un bucle for para imprimir los primeros dos elementos y gestionar el resto. Es adecuado para una iteración con un número conocido de repeticones, en este caso es n-2 despues de los dos primeros dos elementos.
    printf("La serie de fibonacci es: %d, %d", a, b);
    for (int i = 2; i < n; i++) {
        temp = a + b;
        printf(", %d", temp);
        a = b;
        b = temp;
    }
    printf("\n");
}

int main() {
    int n = 10; // Número de elementos de la serie de Fibonacci a imprimir

    // Ejemplo de bucle do-while para leer y validar la entrada del usuario
    int valid = 0;
    do {
        printf("Ingrese el numero de elementos de la serie de Fibonacci a mostrar: ");
        scanf("%d", &n);
        if (n > 1) {
            valid = 1;
        } else {
            printf("Por favor ingrese un número mayor que 1.\n");
        }
    } while (!valid);

    // Llamamos a la función para imprimir la serie de Fibonacci
    fibonacci(n);

    return 0;
}