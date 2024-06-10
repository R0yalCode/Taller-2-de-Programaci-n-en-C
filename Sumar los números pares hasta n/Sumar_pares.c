// Sumar los números pares hasta n
#include <stdio.h>

// Función para calcular la suma de los números pares hasta n
int suma_pares(int n) {
    int suma = 0;

    // Utilizamos un bucle for para iterar sobre los números del 1 al n, es adecuado porque sabemos que queremos sumar números pares desde 2 hasta n, y queremos aumentar 2 en cada paso para que se sumen los números pares. 
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }

    return suma;
}

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Llamamos a la función para calcular la suma de los números pares
    int resultado = suma_pares(n);
    printf("La suma de los numeros pares hasta %d es %d.\n", n, resultado);

    return 0;
}