#include <stdio.h>
#include <string.h>

void mostraCPF(char cpf[]){

    printf("\n----| CPF não formatado |----\n");
    printf("%s\n", cpf);

    printf("\n----| CPF formatado |----\n");
    printf("%.3s.%.3s.%.3s-%.2s\n", &cpf[0], &cpf[3], &cpf[6], &cpf[9]);
    
}

int main(){

    char CPF[30];

    printf("Digite o CPF (Apenas números): ");
    fgets(CPF, sizeof(CPF), stdin);
    CPF[strcspn(CPF, "\n")] = '\0';

    mostraCPF(CPF);

    return 0;
}