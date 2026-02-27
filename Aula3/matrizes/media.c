#include <stdio.h>

#define TAM 10

int main(){

    float arrSalarios[TAM], soma = 0, media;


    for (int i = 0; i<TAM; i++){
        printf("Digite o salario %d: ", i+1);
        scanf("%f", &arrSalarios[i]);
        soma += arrSalarios[i];
    }

    media = soma / TAM;
    printf("A media salarial é de: %.2f R$\n", media);

    for (int i = 0; i<TAM; i++){
        if (arrSalarios[i] >= media){
            arrSalarios[i] = arrSalarios[i]*1.05;
        }else{
            arrSalarios[i] = arrSalarios[i] * 1.10;
        }   
    }
    
    printf("Salarios reajustados: \n");
    for (int i = 0; i< TAM; i++){
        printf("%d: %.2f\n",i, arrSalarios[i]);
    }

    return 0;
}