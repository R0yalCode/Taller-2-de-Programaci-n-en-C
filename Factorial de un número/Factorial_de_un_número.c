#include <stdio.h>

// Función para calcular el factorial de un número
int factorial(int numero) {
    int resultado = 1;

    // Usamos un bucle for para realizar la multiplicación factorial. es adecuado para una iteración con un número conocido de repeticiones. 
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero;
    
    // Ejemplo de bucle do-while para leer y verificar la entrada del usuario, cuando se ingrese un numero negativo este seguira pidiento un número hasta que se cumpla la condición. 
    int valid = 0;
    do {
        printf("Ingrese un numero para calcular su factorial: ");
        scanf("%d", &numero);
        if (numero >= 0) {
            valid = 1;
        } else {
            printf("Por favor ingrese un numero no negativo.\n");
        }
    } while (!valid);

    // Llamamos a la función para calcular el factorial
    int resultado = factorial(numero);
    printf("El factorial de %d es %d.\n", numero, resultado);

    return 0;
}