// Verificar si un número es primo 
#include <stdio.h>

// Función para verificar si un número es primo
int es_primo(int numero) {
    // Los números menores o iguales a 1 no son primos
    if (numero <= 1) {
        return 0; // false
    }

    // Iteramos desde 2 hasta la mitad del número, es adecuado ya que conocemos cuantas veces necesitamos iterar y no necesitamos iterar más allá de la mitad del número.
    for (int i = 2; i <= numero / 2; i++) {
        // Si el número es divisible por algún otro número en este rango, no es primo
        if (numero % i == 0) {
            return 0; // false
        }
    }
    // Si no se encontró ningún divisor, el número es primo
    return 1; // true
}

int main() {
    int numero;

    printf("Ingrese un numero para verificar si es primo: ");
    scanf("%d", &numero);

    // Llamamos a la función para verificar si el número es primo
    if (es_primo(numero)) {
        printf("%d es un numero primo.\n", numero);
    } else {
        printf("%d no es un numero primo.\n", numero);
    }

    return 0;
}