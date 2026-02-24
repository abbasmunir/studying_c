#include <stdio.h>

int main(){

    // ------------------------------------------------------------------
    // EXERCICIO 2
    // ------------------------------------------------------------------

    float farenheit, celsius;

    printf("Digite a temeperatura em farenheit: ");
    scanf("%f", &farenheit);

    celsius = (farenheit - 32)*5/9;

    printf("A temperatura é: %.2f\n", celsius);

    return 0;
}