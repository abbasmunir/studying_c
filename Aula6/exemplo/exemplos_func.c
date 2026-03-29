#include <stdio.h>


int Soma(int a, int b){
    return a + b;
}


int main(){

    int val1 = 2, val2 = 3;

    int resultado = Soma(val1, val2);
    printf("A soma é %d\n", resultado);

}