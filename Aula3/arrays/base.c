#include <stdio.h>
#define TAM 10

int main(){

    float notas[10];

    for (int i = 0; i<=TAM; i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    printf("A lista é: ");
    for (int i = 0; i<=TAM; i++){
        printf("%.2f", notas[i]);
    }

    return 0;
}