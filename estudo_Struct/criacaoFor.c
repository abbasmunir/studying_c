#include <stdio.h>
#include <string.h>

int main(){

    int n = 0;
    char string[30] = "";
    char holder;

    for (int i=1; i<=10; i++){
        n += i;

        sprintf(string + strlen(string), "%d", n);
        
    }

    printf("%s\n", string);
    return 0;
}