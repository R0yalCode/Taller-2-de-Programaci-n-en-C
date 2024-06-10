#include <stdio.h>

// Función para calcular la suma de los primeros n términos de una serie aritmética
int suma_serie_aritmetica(int n) {
    int suma = 0;

    // Usamos un bucle for para sumar los términos de la serie aritmética. Este bucle es adecuado para una iteración con un número conocido de repeticones.
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    return suma;
}

int main() {
    int n;

    // Ejemplo de bucle do-while para leer y verificar la entrada del usuario. segira pidiento al usuario un número valido hasta que se cumpla la condición. 
    int valid = 0;
    do {
        printf("Ingrese el numero de terminos de la serie aritmetica: ");
        scanf("%d", &n);
        if (n > 0) {
            valid = 1;
        } else {
            printf("Por favor ingrese un numero mayor que 0.\n");
        }
    } while (!valid);

    // Llamar a la función para calcular la suma de la serie aritmética
    int suma = suma_serie_aritmetica(n);
    printf("La suma de los primeros %d terminos de la serie aritmetica es %d.\n", n, suma);


    return 0;
}