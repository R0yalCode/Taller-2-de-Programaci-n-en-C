//Potencia mediante sumas sucesivas 
#include <stdio.h>

// Función para multiplicar dos números utilizando sumas sucesivas.
int multiplicar(int a, int b) {
    int resultado = 0;
    // Usamos un bucle while para realizar la multiplicación a través de sumas sucesivas, es adecuado este bucle porque vamos a disminuir b en cada interación hasta que llega a 0.
    while (b > 0) {
        resultado += a;
        b--;
    }
    return resultado;
}

// Función para calcular la potencia de un número utilizando la función de multiplicación.
int potencia(int base, int exponente) {
    int resultado = 1;
    // Usamos un bucle for para realizar la potencia a través de multiplicaciones sucesivas, es adecuado para una iteración con un número conocido de repeticiones.
    for (int i = 0; i < exponente; i++) {
        resultado = multiplicar(resultado, base);
    }
    return resultado;
}

int main() {
    int base = 2;
    int exponente = 3;
    int resultado = potencia(base, exponente);
    
    // Presentar el resultado
    printf("Resultado: %d", resultado);
    
    return 0;
}