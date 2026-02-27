#include <stdio.h>

int main(){


    static float matrix[3][3] = {
        {1.1,2.2,3.3},
        {4.4,5.5,6.6},
        {7.7,8.8,9.9}
    };


    for (int i=0; i<3; i++){
        for (int j = 0; j< 3; j++){
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}