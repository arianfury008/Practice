#include <stdio.h>
#include <stdlib.h>

double divide(double num1,double num2);
double multiply(double num1,double num2);


int main() {
    while(1){
        int option;
        printf("\n\nEnter the number of the problem you wish to solve : \n");
        printf("Given a Medical order in calcalate Rate in\n\n");
        printf("(1) ml/hr tubing drop factor / min\n");
        printf("(2) 1 L for n ml / hr\n");
        printf("(3) mg/kg/hg concentration in mg/ml ml/hr\n");
        printf("(4) units/hr concentration in units/ml ml/hr\n");
        printf("(5) Quit\n");
        scanf("%d",&option);
        if(option == 1){
            double rate;
            double drop;
            printf("Enter rate in ml/hr => \n");
            scanf("%lf",&rate);
            printf("Enter tubing's drop factor drops/ml => \n");
            scanf("%lf",&drop);

            double result = divide(rate,60);
            result = multiply(result,drop);
            printf("The drop rate per minutes is %lf",result); // result
            getchar();
            getchar();
            getchar();
        }
        if(option == 2){
            double hour;
            printf("Enter number of hours : \n");
            scanf("%lf",&hour);
            double result = multiply(hour,15.625);
            printf("The rate in milliliters per hour is %lf",result); // result
            getchar();
            getchar();
            getchar();
        }
        if(option == 3){
            double rate;
            double weight;
            double concentration;
            printf("Enter number rate in mg/kg/hr => : \n");
            scanf("%lf",&rate);
            printf("Enter patient weight in kg => : \n");
            scanf("%lf",&weight);
            printf("Enter concentration in mg/ml => : \n");
            scanf("%lf",&concentration);
            double result = multiply(multiply(rate,weight),concentration);
            printf("The rate in milliliters per hour is %lf",result); // result
            getchar();
            getchar();
            getchar();
        }
        if(option == 4){
            double rate;
            double concentration;
            printf("Enter number rate in units/hour => : \n");
            scanf("%lf",&rate);
            printf("Enter concentration in units/ml => : \n");
            scanf("%lf",&concentration);
            double result = divide(rate,concentration);
            printf("The rate in milliliters per hour is %lf",result); // result
            getchar();
            getchar();
            getchar();
        }
        if(option == 5){
            exit(0);
        }

    }
}

double divide(double num1, double num2){
    return num1 / num2;
}

double multiply(double num1, double num2){
    return num1 * num2;
}
