#include <stdio.h>
#include <string.h>
#include <crypt.h>

typedef struct
{
    char placa[8];
    char marca[20];
    char modelo[30];
    int ano_fab;
}Carro;

int main(){

    Carro carro;

    printf("Digite a placa do carro: ");
    fgets(carro.placa, sizeof(carro.placa), stdin);
    carro.placa[strcspn(carro.placa,"\n")] = '\0';

    printf("Digite a marca do carro: ");
    fgets(carro.marca, sizeof(carro.marca), stdin);
    carro.marca[strcspn(carro.marca,"\n")] = '\0';

    printf("Digite o modelo do carro: ");
    fgets(carro.modelo, sizeof(carro.modelo), stdin);
    carro.modelo[strcspn(carro.modelo,"\n")] = '\0';

    printf("Digite o ano de fabricacao do carro: ");
    scanf("%d", &carro.ano_fab);

    //while (getchar() != "\n"); CASO FOSSE LER MAIS UMA STRING

    printf("\nPlaca: %s", carro.placa);
    printf("\nMarca: %s", carro.marca);
    printf("\nModelo: %s", carro.modelo);
    printf("\nAno de fabricacao: %d\n", carro.ano_fab);

    return 0;
}
