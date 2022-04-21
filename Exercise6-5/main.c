#include <stdio.h>
#include <stdlib.h>

double mult(double num1,double num2);
double divi(double num1,double num2);
double add(double num1,double num2);
double sub(double num1,double num2);
double fac(double num1);


int main() {
    while(1) {
        int option;
        printf("\n\n(1) addition\n");
        printf("(2) subtraction \n");
        printf("(3) multiplication\n");
        printf("(4) division\n");
        printf("(5) factorial\n");
        printf("(6) Quit \n");

        printf("\n\n Enter the choices : \n");
        scanf("%d", &option);
        if(option == 1){
            double a,b;
            printf("Enter two number : \n");
            scanf("%lf",&a);
            scanf("%lf",&b);
            double res = add(a,b);
            printf("sum : %lf",res);
            getchar();
            getchar();
        }
        if(option == 2){
            double a,b;
            printf("Enter two number : \n");
            scanf("%lf",&a);
            scanf("%lf",&b);
            double res = sub(a,b);
            printf("sub : %lf",res);
            getchar();
            getchar();
        }
        if(option == 3){
            double a,b;
            printf("Enter two number : \n");
            scanf("%lf",&a);
            scanf("%lf",&b);
            double res = mult(a,b);
            printf("mul : %lf",res);
            getchar();
            getchar();
        }
        if(option == 4){
            double a,b;
            printf("Enter two number : \n");
            scanf("%lf",&a);
            scanf("%lf",&b);
            double res = divi(a,b);
            printf("div : %lf",res);
            getchar();
            getchar();
        }
        if(option == 5){
            double a;
            printf("Enter fac number : \n");
            scanf("%lf",&a);
            double res = fac(a);
            printf("factorial : %lf",res);
            getchar();
            getchar();
        }
        if(option == 5){
            exit(0);
        }
    }
}

double mult(double num1,double num2){
    return num1 * num2;
}

double divi(double num1,double num2){
    return num1 / num2;
}

double add(double num1,double num2){
    return num1 + num2;
}

double sub(double num1,double num2){
    return num1 - num2;
}

double fac(double num1){
    double facnum = num1;
    for (int i = 1; i < facnum; i++) {
        num1 = num1 * i;
    }
    return num1;
}