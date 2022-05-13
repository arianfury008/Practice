#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int fact_calc(int input);


// Arian Khatiban Exercise 8-1

int main() {
    int input = 0;
    while (true){
        printf("Enter an integer bettween 0 and 9 or -1 to quit =>");
        scanf("%d",&input);

        if(input == -1)
            exit(0);

        if(input >= 0 && input <= 9)
            fact_calc(input);

        else
            continue;

    }
    return - 1;



}

int fact_calc(int input){
    int result = 1;
    printf("\n*******************************************\n");
    printf("*   %d! = ",input);
  for(int i = input; i > 0;i--){
      if(i != 0)
         printf(" %d *",i);
      else
          printf(" %d",i);

      result = result * i;
  }
    printf(" = %d   *",result);
    printf("\n*******************************************\n");

}

