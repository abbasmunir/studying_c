#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char palavra[50];
    int i, j, tam;
    int palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    palavra[strcspn(palavra, "\n")] = '\0';

    tam = strlen(palavra);

    for(i=0, j = tam-1; i<j; i++, j-- ){

        if(tolower(palavra[i]) != tolower(palavra[j])){
            palindromo = 0;
            break;
        }

    }

    if(palindromo == 0){
        printf("A palavra '%s' não é um palíndromo! \n", palavra);
    }else{
        printf("A palavra '%s' é um palíndromo! \n", palavra);
    }

    return 0;
}