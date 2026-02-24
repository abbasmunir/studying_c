#include <stdio.h>

int main(){

    float n1, n2, n3, peso1, peso2, peso3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    printf("Digite o peso 1: ");
    scanf("%f", &peso1);

    printf("Digite o peso 2: ");
    scanf("%f", &peso2);

    printf("Digite o peso 3: ");
    scanf("%f", &peso3);

    media = ( (n1 * peso1) + (n2 * peso2) + (n3 * peso3) ) / (peso1 + peso2 + peso3);

    printf("A media do aluno é: %.2f\n", media);

    
    if (media < 4)
        printf("O aluno está reprovado\n");
    else if (media>=4 && media < 6)
        printf("O aluno está de recuperação\n");
        else
            printf("O aluno está aprovado\n");
    

   //(media > 6) ? printf("Aprovado\n") : printf("Reprovado\n");
    

    return 0;
}