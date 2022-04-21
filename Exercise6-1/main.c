#include <stdio.h>

int main() {
    int num;
    int even,odd;
    printf("Enter your desire number(positive number) : ");
    scanf("%d",&num);

    for(int i =0 ; i < num;i++){
        if(i % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("number is %d and have %d even and %d odd number",num,even,odd);

    return 0;
}
