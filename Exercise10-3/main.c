#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ListLength 4 // mitonid 100 bezanid

typedef struct {
    int xx;
    int yy;
    int zz;
    int mm;
    char nickname[10];
}IP;

struct address_t {
    IP addresses[ListLength];
};

int scan_Address(struct address_t at,int , char[20] );
void print_Address(struct address_t);
int local_Address(struct address_t at,int,int);


int main() {
    struct address_t address_T;

    strcpy(address_T.addresses[0].nickname,"platte");
    address_T.addresses[0].xx = 111;
    address_T.addresses[0].yy = 22;
    address_T.addresses[0].zz = 3;
    address_T.addresses[0].mm = 44;

    strcpy(address_T.addresses[1].nickname,"wabash");
    address_T.addresses[1].xx = 255;
    address_T.addresses[1].yy = 66;
    address_T.addresses[1].zz = 7;
    address_T.addresses[1].mm = 88;

    strcpy(address_T.addresses[2].nickname,"green");
    address_T.addresses[2].xx = 111;
    address_T.addresses[2].yy = 22;
    address_T.addresses[2].zz = 5;
    address_T.addresses[2].mm = 66;

    strcpy(address_T.addresses[3].nickname,"none");
    address_T.addresses[3].xx = 0;
    address_T.addresses[3].yy = 0;
    address_T.addresses[3].zz = 0;
    address_T.addresses[3].mm = 0;

    print_Address(address_T);
    scan_Address(address_T , 111,"platte");
    local_Address(address_T , 0,2);

    return 0;
}


void print_Address(struct address_t at){
    printf("========IP=========\n");
    int Length = sizeof (at.addresses) / sizeof (at.addresses[0]);
    for(int i = 0; i < Length;i++){
        printf("%d.%d.%d.%d      %s\n",at.addresses[i].xx,at.addresses[i].yy,at.addresses[i].zz,at.addresses[i].mm,at.addresses[i].nickname);
    }
}

int scan_Address(struct address_t at,int xx, char nickname[20] ){
    int Length = sizeof (at.addresses) / sizeof (at.addresses[0]);
    for(int i = 0; i < Length;i++){
       if(at.addresses[i].xx == xx || strcmp(nickname,at.addresses[i].nickname)){
           printf("\nyes exist !\n");
           return 1;
       }
    }
    printf("there is no such %d or this %s nickname!\n",xx,nickname);
    return 0;
}


int local_Address(struct address_t at,int id, int id2){
    if(at.addresses[id].xx == at.addresses[id2].xx){
        printf("\nyes they are local address");
        return 1;
    }
    printf("no");
    return 0;
}
