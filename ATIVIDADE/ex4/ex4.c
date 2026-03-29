#include <stdio.h>
#include <string.h>

// Estrutura para os dados do funcionário
typedef struct {
    int matricula;
    char nome[50];
    float salario;
} Funcionario;

// Função para ler dados de 5 funcionários
void lerDados(Funcionario f[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Matricula: ");
        scanf("%d", &f[i].matricula);
        printf("Nome: ");
        scanf(" %[^\n]", f[i].nome);
        printf("Salario: ");
        scanf("%f", &f[i].salario);
    }
}

// Função para exibir dados
void exibirDados(Funcionario f[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Matricula: %d | Nome: %s | Salario: %.2f\n", f[i].matricula, f[i].nome, f[i].salario);
    }
}

// Buscar funcionário por nome
void buscarPorNome(Funcionario f[], int n, char nomeProcurado[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(f[i].nome, nomeProcurado) == 0) {
            printf("Funcionario encontrado: %d - %s - %.2f\n", f[i].matricula, f[i].nome, f[i].salario);
        }
    }
}

// Reajustar salário por matrícula
void reajustarSalario(Funcionario f[], int n, int mat, float percentual) {
    for (int i = 0; i < n; i++) {
        if (f[i].matricula == mat) {
            f[i].salario += (f[i].salario * (percentual / 100));
        }
    }
}

// Calcular média salarial
float calcularMediaSalarial(Funcionario f[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += f[i].salario;
    }
    return soma / n;
}

// Encontrar funcionário com maior salário
Funcionario obterMaiorSalario(Funcionario f[], int n) {
    int indiceMaior = 0;
    for (int i = 1; i < n; i++) {
        if (f[i].salario > f[indiceMaior].salario) {
            indiceMaior = i;
        }
    }
    return f[indiceMaior];
}

int main() {
    Funcionario lista[5];
    lerDados(lista, 5);
    exibirDados(lista, 5);
    
    printf("\nMedia Salarial: %.2f\n", calcularMediaSalarial(lista, 5));
    
    Funcionario top = obterMaiorSalario(lista, 5);
    printf("Maior Salario: %s (%.2f)\n", top.nome, top.salario);
    
    return 0;
}