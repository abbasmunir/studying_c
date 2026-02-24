#include <stdio.h>

int main(){

    // ------------------------------------------------------------------
    // EXERCICIO 3
    // ------------------------------------------------------------------
    
    float imc, peso, altura;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    printf("O IMC é: %.2f\n", imc);

    return 0;
}