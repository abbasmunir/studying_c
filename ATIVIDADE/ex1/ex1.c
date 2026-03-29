#include <stdio.h>

int main() {
    int n;
    printf("Digite o valor limite N: ");
    scanf("%d", &n);

    int array[n + 1];

    // Inicializa o array com os números de 0 a N [cite: 33]
    for (int i = 0; i <= n; i++) {
        array[i] = i;
    }

    // 0 e 1 não são primos [cite: 33]
    array[0] = 0;
    array[1] = 0;

    // O processo continua enquanto o quadrado do número for menor ou igual a N [cite: 29]
    for (int p = 2; p * p <= n; p++) {
        if (array[p] != 0) {
            // Elimina os múltiplos do número atual [cite: 18, 34]
            for (int i = p * p; i <= n; i += p) {
                array[i] = 0;
            }
        }
    }

    // Exibe apenas os números que permaneceram no array (não sinalizados como 0) [cite: 30, 36]
    printf("Numeros primos entre 2 e %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (array[i] != 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}