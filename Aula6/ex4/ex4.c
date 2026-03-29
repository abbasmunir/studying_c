#include <stdio.h>

float conversao(float f){
    float celcius;

    celcius = (f-32) * (5/9);

    return celcius;
}


int main(){

    float farenheit;

    printf("\nDigite o valor em farenheit para conversão: ");
    scanf("%f", &farenheit);

    float result = conversao(farenheit);
    printf("\n%.2f°F em Celcius é: %.2f°C", farenheit, result);


    return 0;
}