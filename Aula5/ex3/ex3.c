#include <stdio.h>
#include <string.h>
#define qtd_alunos 5
#define qtd_notas 3

typedef struct 
{
    char prontuario[20];
    char nome[50];
    float notas[3];
}Alunos;

int main(){

    Alunos alunos[5];

    for(int i=0; i<qtd_alunos; i++){

        float media = 0.0;

        printf("\nDigite o prontuário do aluno %d: ", i+1);
        fgets(alunos[i].prontuario, sizeof(alunos[i].prontuario), stdin);
        alunos[i].prontuario[strcspn(alunos[i].prontuario, "\n")] = '\0';

        printf("\nDigite o nome do aluno %d: ", i+1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        for(int j=0; j<qtd_notas; j++){
            printf("\nDigite a nota %d do aluno '%s': ",j+1, alunos[i].nome);
            scanf("%f", &alunos[i].notas[j]);

            while(getchar() != '\n');

            media += alunos[i].notas[j];
        }
        
        media = media / qtd_notas;

        if (media >= 6)
        {
            printf("\nO aluno '%s' está aprovado.", alunos[i].nome);
        }else if (media < 6 && media >= 4){
            printf("\nO aluno '%s' está de IFA.", alunos[i].nome);
        } else {
            printf("\nO aluno '%s' está reprovado.", alunos[i].nome);
        }
        
        printf("\n");
    }

    return 0;
}


