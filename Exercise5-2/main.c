#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int PlayRockPaperScissors();

int blueScore = 0;
int redScore = 0;
int cycle = 0;
int main() {

    printf("Hi , Welcome to PlayRockPaperScissors we have 2 player here blue and Red\n");
    getchar();
    int ib = PlayRockPaperScissors();
    while(ib == -1){
        printf("\n\nYou should continue (cycle : %d) : \n",cycle);
        getchar();
        ib = PlayRockPaperScissors();
    }
    printf("blue Score : %d\nred Score : %d",blueScore,redScore);
    getchar();
    return 0;
}

int PlayRockPaperScissors(){
    char Choices[20];
    char blue[20];
    char red[20];
    printf("s that means scissors , p means paper , r means rock : press Enter for continue\n");
    getchar();
    printf("blue you are in :(s,p,r) : \n");
    scanf("%s",Choices);
    while (Choices[0] != 's' && Choices[0] != 'p' && Choices[0] != 'r' && Choices[1] != '\0'){
        scanf("%s",Choices);
    }
    strcpy(blue,Choices);
    printf("now red you are in :(s,p,r) : \n");
    scanf("%s",Choices);
    while (Choices[0] != 's' && Choices[0] != 'p' && Choices[0] != 'r' && Choices[1] != '\0'){
        scanf("%s",Choices);
    }
    strcpy(red,Choices);
    printf("blue : %s\nred : %s\n",blue,red);
    getchar();
    int bs,rs = 0;

    if(strcmp(blue,"s")==0 && strcmp(red,"s")==0){
        return -1;
    }
    else if(strcmp(blue,"s")==0 && strcmp(red,"p")==0){
        bs++;
    }
    else if(strcmp(blue,"s")==0 && strcmp(red,"r")==0){
        rs++;
    }
    else if(strcmp(blue,"p")==0 && strcmp(red,"s")==0){
        rs++;
    }
    else if(strcmp(blue,"p")==0 && strcmp(red,"p")==0){
        return -1;
    }
    else if(strcmp(blue,"p")==0 && strcmp(red,"r")==0){
        bs++;
    }
    else if(strcmp(blue,"r")==0 && strcmp(red,"s")==0){
        bs++;
    }
    else if(strcmp(blue,"r")==0 && strcmp(red,"p")==0){
        rs++;
    }
    else if(strcmp(blue,"r")==0 && strcmp(red,"r")==0){
        return -1;
    }
    int option = 0;

    if(cycle >= 2){
        if(bs > rs)
            blueScore++;
        else
            redScore++;

        return 1;
    }

    if(cycle > 0){
        if(bs > rs)
            blueScore++;
        else
            redScore++;

        cycle++;
        return -1;
    }

    if(bs > rs){
        blueScore++;
            printf("\nBlue you win do you want leave(press 0) or continue(press 1) :  \n");
            scanf("%d",&option);
            if(option == 0)
                return 0;
            else{
                cycle++;
                return -1;
            }

    }
    else if(bs < rs)
    {
        redScore++;
            printf("\nRed you win do you want leave(press 0) or continue(press 1) :  \n");
            scanf("%d",&option);
            if(option == 0)
                return 0;
            else{
                cycle++;
                return -1;
            }
    }
}


