#include <stdio.h>

void CreditCartCode();


int main() {
    CreditCartCode();
    return 0;
}

void CreditCartCode(){
    double balance;
    double purchases;
    int purchasesCount = 0;
    printf("Card balance : \n");
    scanf("%lf",&balance);
    int option = 1;
    printf("Are you have another purchases list ? (press 0 for done , press 1 for continue)\n");
    scanf("%d",&option);
    double b = balance;
    while(option == 1 && b > 0){
        b = balance;
        printf("How did you spend ? \n");
        double spendunitlnow = purchases;
        purchases = 0;
        scanf("%lf",&purchases);
        purchases += spendunitlnow;
        purchasesCount++;
        if(purchases > b){
            b = 0;
            printf("your purchases more than your balance !!!");
            getchar();
            break;
        }
        printf("Are you have another purchases list ? (press 0 for done , press 1 for continue)\n");
        scanf("%d",&option);
    }
    balance = balance - purchases;
    printf("your balance now : %lf\nyour purchases : %lf\nCount of purchases : %d" , balance ,purchases,purchasesCount);
    getchar();
    return;
}
