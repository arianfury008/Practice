#include <stdio.h>
#include <string.h>

// Arian khatiban
// exercise 10-1
// car

typedef struct {
    double productiondate; // echo time : zmani ke be integer tabdil shode
    double price;
}date_t;


typedef struct {
    double gaslimit;
    double Tankflow;
}tank_t;

typedef struct Car {
    char Carmanufacturer[20];
    char model[20];
    double Odometer;
    date_t dt;
    tank_t tk;
} auto_t;

auto_t print_auto(auto_t c1);
tank_t print_tank(tank_t c1);
date_t print_date(date_t c1);
int scan_auto_t(auto_t *c);
int scan_tank_t(tank_t *c);
int scan_date_t(date_t *c);
void driver();

int main() {
    driver();
 return 0;
}

void driver(){
    auto_t mystructure;
    date_t dateStruct;
    tank_t tankStruct;

    dateStruct.price = 25000;
    dateStruct.productiondate = 1653997685; // 2022/5/31-11/48/2

    tankStruct.gaslimit = 15000;
    tankStruct.Tankflow = 50000; // 2022/5/31-11/48/2

    strcpy(mystructure.Carmanufacturer, "BMW");
    strcpy(mystructure.model, "SeriesGran");
    mystructure.Odometer = 20000;
    mystructure.dt = dateStruct;
    mystructure.tk = tankStruct;

    print_auto(mystructure);

}

auto_t print_auto(auto_t c1){
    printf("Car manufacturer : %s\nModel : %s\nOdometer : %lf\nproduction date : %lf\nPrice : %lf\ngas limit : %lf\nTank flow : %lf"
    ,c1.Carmanufacturer,c1.model,c1.Odometer,c1.dt.productiondate,c1.dt.price,c1.tk.gaslimit,c1.tk.Tankflow);
}

tank_t print_tank(tank_t c1){
    printf("gas limit : %lf\nTank flow : %lf",c1.gaslimit,c1.Tankflow);
}

date_t print_date(date_t c1){
    printf("production date : %lf\nPrice : %lf",c1.productiondate,c1.price);
}

int scan_auto_t(auto_t *c)
{
 int status;

    status = scanf("%s%s", &c->Carmanufacturer, &c->model);
    if (status == 2)
    status = 1;
    else if (status != EOF)
    status = 0;

return (status);
}


