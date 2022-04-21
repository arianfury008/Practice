#include <stdio.h>
#include <stdlib.h>

#define TelephonDaklli 150
#define Telephonkarji 4000
#define internetDakli 800
#define internetkarji 1300

int main() {
    int phonenum = 0;
    int Receipt = 0;

    printf("Please Enter you phone number : \n");
    scanf("%d",&phonenum);

    int mokalmatyekrozd = rand();
    mokalmatyekrozd = mokalmatyekrozd * 30; // minutes

    int mokalmatyekrozk = rand();
    mokalmatyekrozk = mokalmatyekrozk * 30; // minutes

    int internetyekrozd = rand();
    internetyekrozd = internetyekrozd * 30; // minutes

    int internetyekrozk = rand();
    internetyekrozd = internetyekrozd * 30; // minutes



    mokalmatyekrozd = TelephonDaklli * mokalmatyekrozd;
    mokalmatyekrozk = Telephonkarji * mokalmatyekrozk;
    internetyekrozd = internetDakli * internetyekrozd;
    internetyekrozd = internetkarji * internetyekrozd;

    Receipt = mokalmatyekrozd + mokalmatyekrozk + internetyekrozd + internetyekrozd;

    printf("Receipt : %d (reyal)" , Receipt);
    return 0;
}
