#include <stdio.h>

int main(){

    int angka[5] = {6,7,8,9,10};
    int i = 0;
    int j = 0;

    for( i = 0; i < 5; i++){
        printf("\t%d", angka[i]);
    }

    for( i = 0; i < 5; i++){
        printf("\n%d", angka[i]);
        for( j = 0; j < 5; j++){
            printf("\t%d", angka[i]*angka[j]);
        }
    }

    return 0;
}

