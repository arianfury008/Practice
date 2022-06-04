#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    double  time; // echo time integer
    char destentionName[20];
    char direction[5];
}travel_data;

void print_travel_data(travel_data);
void campare_travel_data(travel_data,travel_data);

int main() {
    travel_data t,b;

    strcpy(t.destentionName,"tehran");
    strcpy(t.direction,"W");
    t.time = 13546543; // zman bar esas integer


    strcpy(b.destentionName,"shomal");
    strcpy(b.direction,"W");
    b.time = 18214543; // zman bar esas integer

    print_travel_data(t);
    print_travel_data(b);

    campare_travel_data(t,b);

    return 0;
}

void print_travel_data(travel_data tr){
    printf("destention name : %s\ntime to fly: %lf\ndirection : %s\n\n",tr.destentionName,tr.time,tr.direction);
}

void campare_travel_data(travel_data tr,travel_data tr2){
    if(strcmp(tr.destentionName,tr2.destentionName) == 0){
        printf("destention of travel is same : %s",tr.destentionName);
    } else{
        printf("destention of travel is not same :\n%s\n%s\n",tr.destentionName,tr2.destentionName);
    }

    if(tr.time == tr2.time){
        printf("time of the travel is same : %s",tr.time);
    } else{
        printf("time of travel is not same :\n%lf\n%lf\n",tr.time,tr2.time);
    }

    if(strcmp(tr.direction,tr2.direction) == 0){
        printf("direction of the travel is same : %s",tr.time);
    } else{
        printf("direction of travel is not same :\n%s\n%s\n",tr.time,tr2.time);
    }
}

