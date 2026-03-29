#include <stdio.h>

int Fatorial(int n){

    int result = 1;

    for(int i=1; i<=n; i++){
        result = result * i;
    }

    return result;

}

int main(){

    int N, Result;
    printf("\nDigite o número que deseja saber o fatorial: ");
    scanf("%d", &N);

    Result = Fatorial(N);

    printf("O Fatorial de %d é: %d", N, Result);

    return 0;
}