#include <stdio.h>

void readMatrix(int line, int column, int matrix[line][column]){


    for(int i=0; i<line; i++){
        for(int j=0; j<column; j++){
            printf("Type the value for |- line %d -| |- column %d-| ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void showMatrix(int line, int column, int matrix[line][column]){

    for(int i=0; i<line; i++){
        for(int j=0; j<column; j++){
            printf("%3d",matrix[i][j]);
        }
        printf("\n");
    }

}

int main(){

    int l, h;

    printf("Digite a largura da matriz: ");
    scanf(" %d", &l);

    while(getchar() != '\n');
    
    printf("Digite a altura da matriz: ");
    scanf(" %d", &h);

    int matrix[h][l];

    readMatrix(l,h,matrix);

    printf("\n");
    printf("|--|Matriz|--|\n");
    showMatrix(l,h,matrix);

    return 0;
}