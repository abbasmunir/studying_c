#include <stdio.h>
#include <string.h>

struct teste
{
    int numb;
    char letter;
    char string[30]; // String em C == Array de char, vide '[]' 
};


int main(){

    struct teste s1;

    s1.numb=10;
    
    strcpy(s1.string, "Teste teste");

    s1.letter = 'A';
    //s1.numb = 10;

    printf("Letra da struct: %c\n", s1.letter);
    printf("Numero da struct: %d\n", s1.numb);
    printf("String: %s\n", s1.string);
    

    sprintf(s1.string, "%d", s1.numb);//Conversão Int -> String

    printf("%s", s1.string);

    return 0;
}