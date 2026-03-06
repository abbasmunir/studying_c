#include <stdio.h>

int main(){

    int matrix[2][2], i, j;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Digite o valor %d da linha %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");

    int maior = matrix[0][0];

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            if (matrix[i][j] > maior)
                maior = matrix[i][j];
        }
    }

    int newMatrix[2][2];

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            newMatrix[i][j] = matrix[i][j] * maior;
            printf("%3d", newMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}