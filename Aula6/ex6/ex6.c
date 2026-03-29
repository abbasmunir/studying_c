#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lerString(char str[], int size){ //Ler string do Usuario e armazenar no str[]

    printf("Digite uma frase: ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';

}

void substituirChar(char str[], char antigo, char novo){ //Ler str[] e 2 char. substituir char antigo pelo novo

    for(int i=0; str[i] != '\0'; i++){
        if (tolower(str[i]) == antigo)
        {
            str[i] = novo;
        }
    }

}

int main(){

    char Str[200], antigo, novo;

    lerString(Str, 200);
    printf("|---| Frase Original |---| \n|---| %s |---|\n", Str);

    //SUBSTITUICAO DE CARACTERES

    printf("\nDigite a letra para ser substituida: ");
    scanf(" %c", &antigo);

    while (getchar() != '\n');
    

    printf("Digite a letra para substituir: ");
    scanf(" %c", &novo);

    substituirChar(Str, antigo, novo);
    printf("\n|---| Frase Substituida |---| \n|---| %s |---|", Str);

    return 0;
}