#include <stdio.h>

int main(){

    int matrix[5][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    /*for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            printf("Digite o valor %d da linha %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }*/

    printf("*---- Matriz Original ---- *\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
    
    for(int k=0; k<4; k++){
        int temp = matrix[1][k];
        matrix[1][k] = matrix[4][k];
        matrix[4][k] = temp;
    }
                
    for(int k=0; k<5; k++){            
        int temp = matrix[k][0];
        matrix[k][0] = matrix[k][3];
        matrix[k][3] = temp;
    }
    
    printf("*---- Matriz Alterada ---- *\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}