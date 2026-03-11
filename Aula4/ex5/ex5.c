#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    char alvo;
    int i;

    printf("Digite uma frase ou palavra: ");
    fgets(texto, sizeof(texto), stdin);
    
    texto[strcspn(texto, "\n")] = '\0';

    printf("Digite o caractere que deseja substituir por '*': ");
    scanf(" %c", &alvo); //Espaço do %c pra limpar buffer

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == alvo) {
            texto[i] = '*';
        }
    }

    printf("\nResultado final: %s\n", texto);

    return 0;
}