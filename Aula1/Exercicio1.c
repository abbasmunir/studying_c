#include <stdio.h>

int main(){

    // EXERCICIO 0

    int n1,n2;
    double media;

    printf("Digite a primeira nota: ");
    scanf("%d", &n1);

    printf("Digite a primeira nota: ");
    scanf("%d", &n2);

    media = (double) (n1+n2)/2;

    printf("A media e: %.2f\n", media);

    if (media < 6){
        printf("Reprovado\n");
    }else{
        printf("Aprovado\n");
    }

    // ------------------------------------------------------------------
    // EXERCICIO 1
    // ------------------------------------------------------------------

    float base, altura, area;

    printf("Digite a base: ");
    scanf("%f", &base);
   
    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("A area do retangulo e: %.2f\n", area);

    return 0;
}