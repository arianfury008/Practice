#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Hoursbase 7.99
#define overlay 1.99

struct internet
{
    char name[20];
    int hours;
    double price;
};

int main() {
    struct internet l;
    printf("Whats your name ? ");
    scanf("%s",l.name);
    printf("How many hours do you use the Internet? ");
    scanf("%d",&l.hours);
    if(l.hours > 10){
        l.price = Hoursbase;
        for(int i = 10;i < l.hours;i++){
            l.price = l.price + overlay;
        }
    } else{
        l.price = Hoursbase;
    }

    printf("tmam hazine hay masrafi shoma %lf hast",l.price);

    FILE *log; // The C library function FILE

    log=fopen("internet.txt","w");// create and open file // "w" mode : Creates an empty file for writing. If a file with the same name already exists, its content is erased and the file is considered as a new empty file.
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr); // if log not been created so return null we should send error then close program
        exit(1);
    }

    fwrite(&l,sizeof(l),1,log); // Write to file
    fclose(log); // close file
    return  0;
}
