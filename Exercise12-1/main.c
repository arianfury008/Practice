#include <stdio.h>
#include <stdlib.h>
#include "Precisions.h";
#include <string.h>

// Arian Khatiban
// Exercise12-1

int main(){
    high_precision_t precision;



    while (scan_high(precision) == 1){
        print_high(precision);

        int value = 0;
        printf("1.Add 2.multiply 3.subtract : ");
        scanf("%d",value);
        if(value == 1){
            high_precision_t precision2;
            while (scan_high(precision2) == 1) {
                add_high(precision,precision2);
            }
            }
        else if(value == 2){
            high_precision_t precision2;
            while (scan_high(precision2) == 1) {
                multiply_high(precision,precision2);
            }
        }
        else if(value == 3){
            high_precision_t precision2;
            while (scan_high(precision2) == 1) {
                multiply_high(precision,precision2);
            }
        } else{
            exit(0);
        }
    }



    return 0;
}

int scan_high(high_precision_t precision){
    int result;

    result = scanf("%d%d%s", precision.digits,
                       &precision.decpt,
                       &precision.sign);
    if (result == 3)
        result = 1;
     else if (result != EOF)
        result = 0;
    return (result);
}

void print_high(high_precision_t precision) {
    printf("\ndigits : %d\ndecpt : %d\nsign : %s\n",precision.digits,precision.decpt,precision.sign);
}

void add_high(high_precision_t precision,high_precision_t precision1){

     int result[20];
    if(strcmp(precision.sign,"+") == 0 && strcmp(precision1.sign,"+") == 0){
        for(int i = 0; i < strlen(precision.digits);i++){
            result[i] = precision.digits[i] + precision1.digits[i];
        }
        printf("+");
        for(int i = 0; i < strlen(result);i++){
            printf("%d",result[i]);
        }
    }

    if(strcmp(precision.sign,"+") == 0 && strcmp(precision1.sign,"-") == 0){
        for(int i = 0; i < strlen(precision.digits);i++){
            result[i] = precision.digits[i] - precision1.digits[i];
        }
        printf("-");
        for(int i = 0; i < strlen(result);i++){
            printf("%d",result[i]);
        }
    }

    // nmidonm chejory bayd array ha ro jam konm ya chejory array berzim to int
    // nmidonm chejory bayd array ha ro jam konm ya chejory array berzim to int
    // nmidonm chejory bayd array ha ro jam konm ya chejory array berzim to int
    // nmidonm chejory bayd array ha ro jam konm ya chejory array berzim to int
    // nmidonm chejory bayd array ha ro jam konm ya chejory array berzim to int


}

void multiply_high(high_precision_t,high_precision_t){
    // nmidonm chejory bayd array ha ro jam konm ya chejory array berzim to int
    // nmidonm chejory bayd array ha ro jam konm ya chejory array berzim to int
    // nmidonm chejory bayd array ha ro jam konm ya chejory array berzim to int
    // nmidonm chejory bayd array ha ro jam konm ya chejory array berzim to int
    // nmidonm chejory bayd array ha ro jam konm ya chejory array berzim to int
    // nmidonm chejory bayd array ha ro jam konm ya chejory array berzim to int
    // nmidonm chejory bayd array ha ro jam konm ya chejory array berzim to int

}