#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char usuario[50];
    int i, erro = 0;
    int tam;

    printf("Digite o nome de usuario: ");
    
    fgets(usuario, sizeof(usuario), stdin);
    
    // Remove o caractere de nova linha '\n' que o fgets adiciona
    usuario[strcspn(usuario, "\n")] = '\0';

    tam = strlen(usuario);

    // Regra 1: Entre 5 e 15 caracteres
    if (tam < 5 || tam > 15) {
        printf("Erro: O usuario deve ter entre 5 e 15 caracteres (atual: %d).\n", tam);
        erro = 1;
    }

    // Regra 2: Deve começar com uma letra
    // isalpha() verifica se o caractere e A-Z ou a-z
    if (tam > 0 && !isalpha(usuario[0])) {
        printf("Erro: O usuario deve comecar obrigatoriamente com uma letra.\n", usuario[0]);
        erro = 1;
    }

    // Regra 3: Nao pode conter espaços
    for (i = 0; i < tam; i++) {
        if (isspace(usuario[i])) {
            printf("Erro: O nome de usuario nao pode conter espaços.\n");
            erro = 1;
            break; 
        }
    }

    if (!erro) {
        printf("Sucesso! Nome de usuario '%s' e valido.\n", usuario);
    }

    return 0;
}