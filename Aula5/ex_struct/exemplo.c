#include <stdio.h>
#include <string.h>
#include <crypt.h>

struct Aluno //Declaração padrão fora da main para ser lido globalmente
{
    char nome[50];
    int idade;
    float media;
};

typedef struct //Declaração de struct com typedef integrado (type def(definition) == label)
{
    char nome[50];
    int idade;
    float media;
}AlunoB;


typedef struct Aluno Aluno; //Label na struct 1

int main(){

    Aluno a1;
    

    return 0;
}