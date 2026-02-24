#include <stdio.h>

int main(){

    int dt1, dt2, mes1, mes2, ano1, ano2;

        printf("Digite a data 1: ");
        scanf("%d", &dt1);

        printf("Digite o mes 1: ");
        scanf("%d", &mes1);

        printf("Digite o ano 1: ");
        scanf("%d", &ano1);

        printf("Digite a data 2: ");
        scanf("%d", &dt2);

        printf("Digite o mes 2: ");
        scanf("%d", &mes2);

        printf("Digite o ano 2: ");
        scanf("%d", &ano2);

        
        while (0){
            if(ano1 > ano2){
                printf("%d maior que %d\n", ano1, ano2);
                break;
            }else if(ano2 > ano1){
                printf("%d maior que %d\n", ano2, ano1);
                break;
            }else{
                if (mes1 > mes2){
                    printf("%d é maior que %d\n", mes1, mes2);
                    break;
                }else if(mes2 > mes1){
                    printf("%d é maior que %d\n", mes2, mes1);
                    break;
                }else{
                    if (dt1 > dt2){
                        printf("%d é maior que %d\n", dt1, dt2);
                        break;
                    }else if(dt2 > dt1){
                        printf("%d é maior que %d\n", dt2, dt1);
                        break;
                    }else{
                        printf("Datas iguais\n");
                    }
                }
            }
        }
        
    return 0;
}