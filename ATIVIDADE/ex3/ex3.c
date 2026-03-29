#include <stdio.h>

// Função para ler a matriz 3x2
void lerMatriz(int m[3][2]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

// Função para exibir a matriz
void exibirMatriz(int m[3][2]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

// Função para encontrar o maior elemento
int maiorElemento(int m[3][2]) {
    int maior = m[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (m[i][j] > maior) maior = m[i][j];
        }
    }
    return maior;
}

// Função para multiplicar elementos pelo maior valor
void multiplicarPeloMaior(int m[3][2], int maior) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            m[i][j] *= maior;
        }
    }
}

// Função para exibir a matriz transposta 2x3 
void exibirTransposta(int m[3][2]) {
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 3; i++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[3][2];
    lerMatriz(A);
    printf("Matriz A:\n");
    exibirMatriz(A);
    
    int m = maiorElemento(A);
    printf("Maior elemento: %d\n", m);
    
    printf("Matriz Transposta (At):\n");
    exibirTransposta(A);
    
    multiplicarPeloMaior(A, m);
    printf("Matriz A multiplicada pelo maior valor:\n");
    exibirMatriz(A);
    
    return 0;
}