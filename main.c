#include <stdio.h>

int main(void) {
    int i=1;
    int tempGiorno;
    int tempGiornoPrecedente=5;
    int temperaturaAuma=0;
    int temperaturaDim=0;
    while(i<=10){
        i++;
        printf("la temperatura del giorno e : " ) ;
            scanf("%d",&tempGiorno);
        if(tempGiorno > tempGiornoPrecedente){
            temperaturaAuma++;
        }
        else if(tempGiorno < tempGiornoPrecedente) {
            temperaturaDim++;
        }
    }
    printf("la temperatura e aumentata : %d ",temperaturaAuma);
    printf("la temperatura e diminuita : %d ",temperaturaDim);
    return 0;
}
