#include <stdio.h>
#include <math.h>


void charges(double, double*, double*);
double round_money(double);

int main()
{

    FILE *input = fopen("usage.txt", "r"),
            *output = fopen("charges.txt", "w");


    int month, year, customer_id, n;
    double hours, charge, average;


    fscanf(input, "%d %d", &month, &year);


    fprintf(output, "Charges for %d/%d\n", month, year);
    fprintf(output,"\nCustomer\tHours used\tCharge per hour\t\tAverage cost\n");


    while(fscanf(input, "%d", &customer_id) != EOF)
    {
        fscanf(input, "%lf", &hours);
        charges(hours, &charge, &average);
        fprintf(output,"%d\t\t%.1f\t\t%.2f\t\t\t%.2f\n", customer_id, hours, charge, average);
    }


    fclose(input);
    fclose(output);

    return 0;
}


void charges(double hours, double* charge, double* average)
{
    if (hours <= 10)
        *charge = 7.99;
    else
        *charge = 7.99 + (1.99  * (ceil(hours) - 10));

    *average = *charge / hours;

    *charge = round_money(*charge);
    *average = round_money(*average);
}


double round_money(double num)
{
    int value = (num * 100 + 0.5);
    return (double)value/100;
}