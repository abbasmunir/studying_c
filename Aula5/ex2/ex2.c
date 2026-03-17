#include <stdio.h>
#include <string.h>

#define qtd_prod 5

typedef struct
{
    char nome[50];
    float preco;
    int qtd_estoque;
}Produtos;


int main(){

    Produtos prod[qtd_prod];
    float somaPreco = 0.0;

    for(int i=0; i<qtd_prod; i++){

        printf("Digite o nome do produto %d: ", i+1);
        fgets(prod[i].nome, sizeof(prod[i].nome), stdin);
        prod[i].nome[strcspn(prod[i].nome, "\n")] = '\0';

        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &prod[i].preco);

        printf("Digite o estoque do produto %d: ", i+1);
        scanf("%d", &prod[i].qtd_estoque);

        somaPreco += prod[i].preco;

        while(getchar() != '\n');

    }

    for(int i=0; i<qtd_prod; i++){
        float capitalFinanceiro = prod[i].preco * prod[i].qtd_estoque;
        printf("\nCapital financeiro do produto '%s': %.2f", prod[i].nome ,capitalFinanceiro);
    }
    printf("\n");

    float media = somaPreco / qtd_prod;

    printf("\nProdutos com valor acima da média\n");
    for(int i=0; i<qtd_prod; i++){

        if (media > prod[i].preco){
            printf("\nNome: %s", prod[i].nome);
            printf("\nPreco: %.2f", prod[i].preco);
            printf("\nQuantidade: %d", prod[i].qtd_estoque);
        }
    }
    printf("\n");
    return 0;
}