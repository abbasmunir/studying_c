#include <stdio.h>
#include <string.h>
#define qtd_habitantes 5

typedef struct
{
    float salario;
    char sexo[10];
    int idade;
    int num_filhos;
}Habitantes;

int main(){

    Habitantes habitantes[qtd_habitantes];

    float media_salarial = 0.0, media_filhos = 0, maior_salario = 0.0, menor_salario = 999999999999999, mulher_sup2000=0.0;

    for(int i=0; i<qtd_habitantes; i++){

        //SALARIO + CALCULOS --------------------------------------------

        printf("\nDigite o salario do habitante %d: ",i+1);
        scanf("%f", &habitantes[i].salario);

        media_salarial += habitantes[i].salario;

        if (habitantes[i].salario > maior_salario)
            maior_salario = habitantes[i].salario;
        
        if (habitantes[i].salario < menor_salario)
            menor_salario = habitantes[i].salario;
        

        while(getchar() != '\n'); //LIMPA ESSA BOSTA   

        //SEXO? FAÇO -----------------------------------------------------

        printf("\nDigite o sexo do habitante %d (MASC ou FEM): ",i+1);
        fgets(habitantes[i].sexo, sizeof(habitantes[i].sexo), stdin);
        habitantes[i].sexo[strcspn(habitantes[i].sexo, "\n")] = '\0';

        if(strcmp(habitantes[i].sexo, "FEM") == 0 && habitantes[i].salario > 2000){
            mulher_sup2000 += 1;
        }

        //IDADE ----------------------------------------------------------

        printf("\nDigite a idade do habitante %d: ",i+1);
        scanf("%d", &habitantes[i].idade);

        while(getchar() != '\n'); //LIMPA DNV

        //SEU COELHO DO CARALHO -------------------------------------------
        printf("\nDigite a quantidade de filhos do habitante %d: ",i+1);
        scanf("%d", &habitantes[i].num_filhos);

        media_filhos += habitantes[i].num_filhos;

    }

    //PORCENTAGEM DE MULHERES QUE RECEBEM + DE 2000
    mulher_sup2000 = (mulher_sup2000 / qtd_habitantes) * 100;
    printf("\nA porcenteagem de mulheres que ganham mais de R$ 2000 por mês é: %.2f\n", mulher_sup2000);

    //MAIOR E MENOR SALARIOS
    printf("O maior salario foi de R$%.2f e o menor R$%.2f\n", maior_salario, menor_salario);

    //NUMERO MEDIO DE FILHOS
    media_filhos = media_filhos / qtd_habitantes;
    printf("A media de filhos é de %.3f\n", media_filhos);

    //MEDIA SALARIAL DA POPULAÇÃO
    media_salarial = media_salarial / qtd_habitantes;
    printf("A média salarial da população é de %.2f\n", media_salarial);

    return 0;
}
