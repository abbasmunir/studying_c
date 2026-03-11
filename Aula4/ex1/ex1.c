#include <stdio.h>
#include <string.h>

int main(){

    char str[30];
    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int cont = 0;

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] != "")
            cont+=1;
    }
    
    printf("A palavra '%s' possui %d caracteres\n", str, cont);

    return 0;
}