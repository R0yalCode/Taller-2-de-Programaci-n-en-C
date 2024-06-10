#include <stdio.h>

// Función para contar el número de dígitos de un número
int contar_digitos(int numero) {
    int contador = 0;

    // Usamos un bucle while para dividir el número por 10 y contar los dígitos. Este bucle es adecuado ya que no se conoce cuantos digitos tiene el número, por lo que se continua dividendo hasta que el número sea 0.
     
    while (numero != 0) {
        numero /= 10;
        contador++;
    }

    return contador;
}

int main() {
    int numero;

    printf("Ingrese un numero para contar sus digitos: ");
    scanf("%d", &numero);

    // Llamamos a la función para contar los dígitos
    int num_digitos = contar_digitos(numero);
    printf("El numero %d tiene %d digito(s).\n", numero, num_digitos);

    return 0;
}