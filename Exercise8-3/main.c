#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Arian Khatiban Exrercise 8-3
int main() {
    // length our list
    int size_of_array = 0;
    printf("Length of list ? ");
    scanf("%d",&size_of_array);
    if(size_of_array <= 0)
        exit(0);

    char firstname[size_of_array][20],lastname[size_of_array][20], age[size_of_array][5];


    // inputting the list
    for(int i = 0; i < size_of_array; i++){
        printf("\n Name : ");
        scanf("%s",firstname[i]);
        printf("\n LastName : ");
        scanf("%s",lastname[i]);
        printf("\n age : ");
        scanf("%s",age[i]);
    }

    // show the orginal list
    printf("\n------- Orginal List -----------\n");
    for(int i = 0; i < size_of_array;i++){
        printf("\n%s,%s       %s",firstname[i],lastname[i],age[i]);
    }

    char temp[30];
    char temp2[30];

    //Sort array using the Buuble Sort algorithm
    for(int i=0; i<size_of_array; i++){
        for(int j=0; j<size_of_array-1-i; j++){
            if(strcmp(firstname[j], firstname[j+1]) > 0){
                //swap array[j] and array[j+1]
                strcpy(temp, firstname[j]);
                strcpy(temp2,lastname[j]);
                strcpy(firstname[j], firstname[j+1]);
                strcpy(lastname[j],lastname[j+1]);
                strcpy(firstname[j+1], temp);
                strcpy(lastname[j+1],temp2);
            }
        }
    }

    // show the Sorted list
    printf("\n------- Sorted List -----------\n");
    for(int i = 0; i < size_of_array;i++){
        printf("\n%s,%s       %s",firstname[i],lastname[i],age[i]);
    }


    return  -1;

}
