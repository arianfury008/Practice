#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Arian Khatiban Exercise 8-2

int main() {
    char verb[30];
    printf("Please Enter a verb : ");
    scanf("%s",verb);
    int length = strlen(verb);
    if(verb[length-1] == 'e'){
        printf( "%sd",verb);
    } else if((verb[length-2] == 'g' && verb[length-1] == 'h') || (verb[length-2] == 's' && verb[length-1] == 's')){
        printf( "%sed",verb);
    } else{
        printf("Irregular Verb !");
    }
    return -1;
}
