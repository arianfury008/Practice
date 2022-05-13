#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char string1[20],string2[20];
    printf("Enter string 1 : \n");
    scanf("%s",&string1);
    printf("\nEnter string 2 : \n");
    scanf("%s",&string2);

    printf("similar : ");
   for(int i = 0; i < strlen(string1);i++){
       for(int j = 0; j < strlen(string2);j++){
         if(string2[j] == string1[i]){
             printf("%c-",string1[i]);
           }
       }
   }

    //char *ret;

   // ret = strstr(string1, string2);

   // printf("similar: %s\n", ret);
    return -1;
}
