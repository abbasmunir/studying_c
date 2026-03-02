#include <stdio.h>

int main(){

    int array1[5];
    int array2[5];

    for(int i=0; i<5; i++){
        printf("\nDigite o %d° numero: ",i+1);
        scanf("%d", &array1[i]);
    }

    for(int j=0; j<5; j++){
        printf("\nDigite o %d° numero: ",j+1);
        scanf("%d", &array2[j]);
    }

    for(int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            if(array1[i] == array2[j]){
                printf("\nValor encontrado: (%d) -> Posicao %d do array 1 na posicao %d do array 2\n", array1[i], i, j);
            }
        }
        
    }

    return 0;
}