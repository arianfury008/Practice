#include <stdio.h>

int main() {
    int arr[35];
    arr[0] = 6;
    arr[1] = 7;
    arr[2] = 8;
    arr[3] = 9;
    arr[4] = 10;
    arr[5] = 6;
    arr[6] = 36;
    arr[7] = 42;
    arr[8] = 49;
    arr[9] = 56;
    arr[10] = 63;
    arr[11] = 70;
    arr[12] = 7;
    arr[13] = 42;
    arr[14] = 49;
    arr[15] = 56;
    arr[16] = 63;
    arr[17] = 70;
    arr[18] = 8;
    arr[19] = 48;
    arr[20] = 56;
    arr[21] = 64;
    arr[22] = 72;
    arr[23] = 80;
    arr[24] = 9;
    arr[25] = 54;
    arr[26] = 63;
    arr[27] = 72;
    arr[28] = 81;
    arr[29] = 90;
    arr[30] = 10;
    arr[31] = 60;
    arr[32] = 70;
    arr[33] = 80;
    arr[34] = 90;
    arr[35] = 100;


    int length = sizeof (arr)/sizeof(arr[0]);

    for(int i = 0;i < length;i++){
        if(i == 0) printf(" ");
        if(i == 5) printf("\n");
        if(i == 10) printf("\n");
        if(i == 16) printf("\n");
        if(i == 22) printf("\n");
        if(i == 28) printf("\n");
        printf(" %d ",arr[i]);
    }
    return  0;
}
