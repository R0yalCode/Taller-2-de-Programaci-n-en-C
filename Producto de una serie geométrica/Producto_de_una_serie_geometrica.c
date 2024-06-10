// Producto de una serie geometrica
#include <stdio.h>

// Función para calcular el producto de los primeros n términos de una serie geométrica
int producto_serie_geometrica(int n)
{
    int producto = 1;

    // Utilizamos un bucle for para iterar sobre los términos de la serie y multiplicarlos, es adecuado en este caso porque el número de iteraciones esta determinado por n.
    for (int i = 1; i <= n; i++)
    {
        // En cada iteración, multiplicamos el término actual por 2 elevado a la potencia de i
        producto *= 2 << (i - 1);
    }

    return producto;
}

int main()
{
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Llamamos a la función para calcular el producto de la serie geométrica
    int resultado = producto_serie_geometrica(n);
    printf("El producto de los primeros %d terminos de la serie geometrica es %d.\n", n, resultado);

    return 0;
}