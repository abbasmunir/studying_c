#include <stdio.h>

void retangulo(int h, int l, char simbol){
    
    for(int i=0; i<h; i++){
        for(int j=0; j<l; j++){
            printf("%c", simbol);
        }
        printf("\n");
    }
}


int main(){

    int altura, largura;
    char simbolo;

    printf("Digite a altura do retangulo: ");
    scanf("%d", &altura);
    
    printf("Digite a largura do retangulo: ");
    scanf("%d", &largura);
    
    printf("Digite o caracter: ");
    scanf(" %c", &simbolo);

    retangulo(altura, largura, simbolo);
    return 0;
}