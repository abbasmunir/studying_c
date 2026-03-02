#include <stdio.h>
#define tam 10

int main(){

    float salario[tam], soma = 0;

    for(int i=0; i<tam; i++){
        printf("Digite o salario do %d° funcionario: ", i+1);
        scanf("%f", &salario[i]);
        soma += salario[i];
    }

    float media = soma / tam;

    for(int i=0; i<tam; i++){
        if (salario[i] > media)
            salario[i] = salario[i] * 1.05;
        else
            salario[i] = salario[i] * 1.10;    
    }

    printf("\nA media de salarios é: %f\n", media);
    printf("Os novos salarios são: \n");

    for (int i = 0; i<tam; i++){

        printf("%d: %.2f\n", i+1, salario[i]);

    }

    return 0;
}