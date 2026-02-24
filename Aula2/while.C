#include <stdio.h>

int main(){
    for (int i = 1; i<=10; i++){

        if(i%2 == 0){
            printf("%d\n", i);
        }
    }


    for (int i=1; i<=10; i++){
        printf("----------------\n");
        for (int j=1; j<=10; j++){
            printf("%d X %d = %d\n", i, j, i*j);
        }
    }
    printf("----------------\n");
    return 0;
}