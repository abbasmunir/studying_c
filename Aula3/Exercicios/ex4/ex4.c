#include <stdio.h>

int main(){

    int matrix[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };

    int contPares=0;

    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            if(matrix[i][j] % 2 == 0){
                contPares += 1;
            }
        }
    }
    printf("Dentro da matrix foram encontrados %d numeros pares\n", contPares);

    for(int j=0; j<3; j++){
        float soma = 0;
        
        for(int i=0; i<4; i++){
            soma += matrix[i][j];
        }

        float media = soma / 4;
        printf("A media da coluna %d é %.2f\n", j+1, media);
    }

    return 0;

}