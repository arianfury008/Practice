#include <stdio.h>



// Arian khatiban
// Exercise 7-2
int main() {
    int allNum[20];
    allNum[0] = 192;
    allNum[1] = 192;
    allNum[2] = 48;
    allNum[3] = 206;
    allNum[4] = 37;
    allNum[5] = 147;
    allNum[6] = 90;
    allNum[7] = 312;
    allNum[8] = 21;
    allNum[9] = 186;
    allNum[10] = 12;
    allNum[11] = 121;
    allNum[12] = 38;
    allNum[13] = 114;
    allNum[14] = 21;
    allNum[15] = 408;
    allNum[16] = 39;
    allNum[17] = 267;
    allNum[18] = 13;
    allNum[19] = 382;
    allNum[20] = 29;

    int counter = 0;
    double A = 0;
    double B = 0;
    double C = 0;
    double D = 0;

    for(int i = 0; i < 5;i++){
        printf("\nprecienct %d: ",i + 1);
        for(int j = 1; j <= 4;j++){
            counter++;
            char name[0];
            if(j == 1){
                name[0] = 'A';
                A = A + allNum[counter];
            }
            else if(j == 2){
                name[0] = 'B';
                B = B + allNum[counter];
            }
            else if(j == 3){
                name[0] = 'C';
                C = C + allNum[counter];
            }
            else if(j == 4){
                name[0] = 'D';
                D = D + allNum[counter];
            }
            printf("      Candidate %s : %d",name,allNum[counter]);
        }
    }
    double result = A + B + C + D;
    double APer = (A / result) * 100;
    double BPer = B / result * 100;
    double CPer = C / result * 100;
    double DPer = D / result * 100;

    printf("\n\nwhole candidate :\nA: %lf - Percent A : %lf\nB: %lf - Percent B : %lf\nC: %lf - Percent C : %lf\nD: %lf - Percent D : %lf\nResult : %lf"
           ,A,APer,B,BPer,C,CPer,D,DPer,result);

    if(APer > 50.0){
        printf("\ncondidate A win");
    }
    else if(BPer > 50.0){
        printf("\ncondidate B win");
    }
    else if(CPer > 50.0){
        printf("\ncondidate C win");
    }
    else if(DPer > 50.0){
        printf("\ncondidate D win");
    }
    else {
        // beacuse C win the condidate we dont need this line of code :)
    }

    return 0;
}
