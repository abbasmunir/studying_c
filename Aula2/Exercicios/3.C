#include <stdio.h>

int main(){
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    /*
    a + b > c
    a + c > b
    b + c > a
    */

   if (a==b==c){
    printf("Equilatero");
   } else if (a == b != c){
    printf("Isoceles");
   } else if (a != b == c){
    printf("Isoceles");
    } else if (a == c != b){
    printf("Isoceles");
   } else if (a != b != c){
    printf("Escaleno");
   }
}