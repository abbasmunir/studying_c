#include <stdio.h>

int main() {
    // Array 3D: [Escolas][Categorias][Jurados]
    float notas[4][3][2]; 
    float soma[4] = {0, 0, 0, 0};

    // Entrada de dados
    for (int i = 0; i < 4; i++) {
        printf("--- Notas da Escola %d ---\n", i + 1);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("Categoria %d, Jurado %d: ", j + 1, k + 1);
                scanf("%f", &notas[i][j][k]); 
                soma[i] += notas[i][j][k];
            }
        }
        printf("\n");
    }

    // Exibição de resultados
    printf("========== RESULTADOS ==========\n");
    for (int i = 0; i < 4; i++) {
        printf("\nEscola %d - Soma total: %.2f", i + 1, soma[i]);
        for (int j = 0; j < 3; j++) {
            float media_cat = (notas[i][j][0] + notas[i][j][1]) / 2.0;
            printf("\n  > Media Categoria %d: %.2f", j + 1, media_cat);
        }
        printf("\n--------------------------------");
    }

    return 0;
}