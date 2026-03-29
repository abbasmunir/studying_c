#include <stdio.h>
#include <string.h>
#define qtd 2

typedef struct
{
    char placa[30];
    char marca[30];
    char modelo[30];
    int ano_fab;
}veiculo;

void limpaBuffer(){
    while(getchar() != '\n');
}

void lerDados(veiculo vehicle[qtd]){

    for(int i=0; i<qtd; i++){

        printf("\nDigite a placa do veiculo %d: ", i+1);
        fgets(vehicle[i].placa, sizeof(vehicle[i].placa), stdin);
        vehicle[i].placa[strcspn(vehicle[i].placa, "\n")] = '\0';

        printf("\nDigite a marca do veiculo %d: ", i+1);
        fgets(vehicle[i].marca, sizeof(vehicle[i].marca), stdin);
        vehicle[i].marca[strcspn(vehicle[i].marca, "\n")] = '\0';

        printf("\nDigite o modelo do veiculo %d: ", i+1);
        fgets(vehicle[i].modelo, sizeof(vehicle[i].modelo), stdin);
        vehicle[i].modelo[strcspn(vehicle[i].modelo, "\n")] = '\0';

        printf("\nDigite o ano de fabricação do veiculo %d: ", i+1);
        scanf("%d", &vehicle[i].ano_fab);

        while (getchar() != '\n');
        
    }

}

void showData(veiculo vehicle[qtd]){


    for(int i=0; i<qtd; i++){

        printf("\n|----| CARRO %d |----|\n\n", i+1);
        printf("Placa do carro %d : %s\n", i+1, vehicle[i].placa);
        printf("Marca do carro %d : %s\n", i+1, vehicle[i].marca);
        printf("Modelo do carro %d : %s\n", i+1, vehicle[i].modelo);
        printf("Ano de fabricação do carro %d : %d\n", i+1, vehicle[i].ano_fab);

    }

}

void alterData(veiculo vehicle[qtd]){

    int opcCarro, opcDado;

    printf("Deseja alterar o dado de qual carro? \n");
    for(int i=0; i<qtd; i++){
        printf("%d -> %s\n",i+1, vehicle[i].modelo);
    }
    printf("\nDigite a opção: ");
    scanf("%d", &opcCarro);
    if(opcCarro < 0 || opcCarro > qtd+1){
        printf("Opção invalida!\n");
        limpaBuffer();
        return;
    };

    printf("\nQual dado deseja atualizar de %s ?", vehicle[opcCarro].modelo);
    printf("(1-Placa | 2-Marca | 3-Modelo | 4-Ano de Fabricação)");
    scanf("%d", &opcDado);
    limpaBuffer();

    switch (opcDado)
    {
    case 1:
        printf("Digite a nova placa: ");
        fgets(vehicle[opcCarro].placa, sizeof(vehicle[opcCarro].placa), stdin);
        vehicle[opcCarro].placa[strcspn(vehicle[opcCarro].placa, "\n")] = '\0';
        printf("Placa atualizada!\n");
        break;

    case 2:
        printf("Digite a nova marca: ");
        fgets(vehicle[opcCarro].marca, sizeof(vehicle[opcCarro].marca), stdin);
        vehicle[opcCarro].marca[strcspn(vehicle[opcCarro].marca, "\n")] = '\0';
        printf("Marca atualizada!\n");
        break;
    
    case 3:

        printf("Digite o novo modelo: ");
        fgets(vehicle[opcCarro].modelo, sizeof(vehicle[opcCarro].modelo), stdin);
        vehicle[opcCarro].modelo[strcspn(vehicle[opcCarro].modelo, "\n")] = '\0';
        printf("Modelo atualizado!\n");
        break;
    
    case 4:
        
        printf("Digite o novo ano de fabricação: ");
        scanf("%d", &vehicle[opcCarro].ano_fab);
        printf("Ano de fabricação atualizado!\n");
        break;
    default:
        break;
    }

}

int main(){

    veiculo Veiculo[qtd];


    //OBV em um release aqui teria um menu completo e etc mas preguiça bate forte no momento

    lerDados(Veiculo);

    showData(Veiculo);

    alterData(Veiculo);

    showData(Veiculo);

    return 0;
}
