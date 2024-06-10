#include <stdio.h>

// Función para multiplicar dos números utilizando sumas sucesivas.
int multiplicar(int a, int b) {
    int resultado = 0;
    // Usamos un bucle while para realizar la multiplicación a través de sumas sucesivas. Es adecuado por que disminuimos b en cada iteración hasta que llega a 0.
    while (b > 0) {
        resultado += a;
        b--;
    }
    return resultado;
}

// Función para calcular la potencia de un número utilizando la función de multiplicación.
int potencia(int base, int exponente) {
    int resultado = 1;
    // Usamos un bucle for para realizar la potencia a través de multiplicaciones sucesivas. Es adecuado para una iteración donde se conoce el número de repeticiones.

    for (int i = 0; i < exponente; i++) {
        resultado = multiplicar(resultado, base);
    }
    return resultado;
}

// Función para calcular la raíz cúbica utilizando restas sucesivas
int raiz_cubica(int numero) {
    int resultado = 0;
    int potencia_actual;
    do {
        potencia_actual = potencia(resultado + 1, 3);
        if (potencia_actual <= numero) {
            resultado++;
        }
    } while (potencia_actual <= numero);
    return resultado;
}

int main() {
    int numero = 27;
    int resultado = raiz_cubica(numero);

    //Presentar el resultado
    printf("La raiz cubica de %d es %d", numero, resultado);

    
    return 0;
}