#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Arian khatiban
// Exercise7-1
int main() {
    int barcode[12];

    printf("Enter your UPC Code :\n");

    for(int i =0; i < 12;i++){
        scanf("%d",&barcode[i]);
    }
    printf("\nthe array contains : ");

    for(int i =0; i < 12;i++){
        printf("%d ",barcode[i]);
    }
    int result;
    int value1 = 0;
    int value2 = 0;
    for(int i =0;i < 11;i++){
        if(i % 2 == 0){
            value2 = value2 + barcode[i];
        }else
        {
            value1 = value1 + barcode[i];
        }
    }

    value1 = value1 * 3;
    printf("\nvalue 1 : %d" , value1);
    printf("\nvalue 2 : %d" , value2);
    result = value1 + value2;
    printf("\nResult : %d" , result);

    int lastdigit = result % 10;
    printf("\nlastdigit 1 : %d" , lastdigit);

    int lastdigit2 = (result -10) % 10;
    printf("\nlastdigit 2 : %d" , lastdigit2);


    if(lastdigit == 0){
        if(barcode[11] == lastdigit){
            printf("\nUPC Accepted !");
        }
        else
            printf("\nUPC Error !");

    }
    else
    {
        if(lastdigit2 == barcode[11]){
            printf("\nUPC Accepted !");
        }
        else
           printf("\nUPC Error !");
    }

    return 0;
}
