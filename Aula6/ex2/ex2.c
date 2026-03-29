#include <stdio.h>

void dataExtenso(int date, int month, int year){ // date "de" month "de" year

    printf("%d de ", date);

    char *meses[] = {
        "Janeiro", "Fevereiro",
        "Março", "Abril", "Maio",
        "Junho", "Julho", "Agosto",
        "Setembro", "Outubro",
        "Novembro", "Dezembro"
    };

    if(month >= 1 && month <= 12){
        printf("%s", meses[month - 1]);
    } else {
        printf("Mês inválido");
    }

    printf(" de %d\n", year);
}

int main(){

    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    
    printf("Digite o mes: ");
    scanf("%d", &mes);
    
    printf("Digite ano: ");
    scanf("%d", &ano);

    dataExtenso(dia, mes, ano);

    return 0;
}