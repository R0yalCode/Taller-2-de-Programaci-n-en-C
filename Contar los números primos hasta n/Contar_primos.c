// Contar los números primos hasta n 
#include <stdio.h>

// Función para verificar si un número es primo
int es_primo(int numero) {
    if (numero <= 1) {
        return 0; // El número no es primo
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // El número no es primo
        }
    }
    return 1; // El número es primo
}

// Función para contar los números primos hasta n
int contar_numeros_primos(int n) {
    int contador = 0;
    
    // Se utiliza el bicle for para iterar sobre cada número desde 1 hasta n, verificando si un número es primo, es adecuado en este caso porque el número de iteraciones esta dterminado por n. 
    for (int i = 1; i <= n; i++) {
        contador += es_primo(i);
    }

    return contador;
}

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    int cantidad_primos = contar_numeros_primos(n);
    printf("Hay %d numeros primos hasta %d.\n", cantidad_primos, n);

    return 0;
}