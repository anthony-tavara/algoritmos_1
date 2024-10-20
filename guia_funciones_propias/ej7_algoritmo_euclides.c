#include <stdio.h>

// Función que implementa el Algoritmo de Euclides
int mcd(int a, int b) {
    // Mientras el residuo no sea cero
    while (b != 0) {
        int residuo = a % b;  // Calcula el residuo
        a = b;  // Actualiza a
        b = residuo;  // Actualiza b con el residuo
    }
    return a;  // El valor de 'a' es el MCD
}

int main() {
    int num1, num2;

    // Solicita los números al usuario
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    // Llama a la función y muestra el resultado
    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd(num1, num2));

    return 0;
}
