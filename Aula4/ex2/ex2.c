#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char str[30];


    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int cont = 0;

    for(int i=0; str[i] != '\0'; i++){

        char c = tolower(str[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            cont++;
        }
        
        printf("A string contém %d vogais \n", cont);

    }

    return 0;
}