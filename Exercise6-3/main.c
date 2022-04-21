#include <stdio.h>
#include <stdlib.h>

#define P 3.14

double multiply(double num1,double num2);
double divide(double num1,double num2);
double additive(double num1,double num2);


int main() {
    while(1){
        int option;
        printf("\n\n(1) Area of a parallelogram\n");
        printf("(2) Area of a triangle \n");
        printf("(3) Area of a trapezoid\n");
        printf("(4) Area of a circle\n");
        printf("(5) Quit \n");
        scanf("%d",&option);

        if(option == 1){
            double A; //A=bh
            double b; // base
            double h; // height
            printf("What is base of parallelogram ? \n");
            scanf("%lf",&b);
            printf("What is Height of parallelogram ? \n");
            scanf("%lf",&h);
            A = multiply(b,h);
            printf("Area of a parallelogram : %lf",A);
            getchar();
            getchar();
            getchar();
        }
        if(option == 2){
            double A; //A=bh(b) / 2
            double b; // base
            double h; // height
            printf("What is base of triangle  ? \n");
            scanf("%lf",&b);
            printf("What is Height of triangle  ? \n");
            scanf("%lf",&h);
            A = divide(multiply(b,h),2);
            printf("Area of a triangle  : %lf",A);
            getchar();
            getchar();
            getchar();
        }
        if(option == 3){
            double A; //A=a+b / 2 * h
            double a; // base smaller
            double b; // base bigger
            double h; // height
            printf("What is base smaller of trapezoid  ? \n");
            scanf("%lf",&a);
            printf("What is base bigger of trapezoid  ? \n");
            scanf("%lf",&b);
            printf("What is Height of trapezoid  ? \n");
            scanf("%lf",&h);
            A = multiply(divide(additive(a,b),2),h);
            printf("Area of a trapezoid  : %lf",A);
            getchar();
            getchar();
            getchar();
        }
        if(option == 4){
            double A; //A=πr2
            double r; // Radius
            printf("What is radius of circle  ? \n");
            scanf("%lf",&r);
            A = multiply(multiply(r,r),P);
            printf("Area of a circle  : %lf",A);
            getchar();
            getchar();
            getchar();
        }
        if(option == 5){
            exit(0);
        }
    }
}

double multiply(double num1,double num2){
    return num1 * num2;
}

double divide(double num1,double num2){
    return num1 / num2;
}

double additive(double num1,double num2){
    return num1 + num2;
}
