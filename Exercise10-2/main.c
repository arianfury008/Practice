#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Arian khatiban
//Exercise10-2

#define NumberOfEmployees 20

struct person {
    char name[20];
    char lastname[20];
    char city[20];
    char phoneNumber[20];
    int age;
    int nationalCode;
    int salary; // toman
};

struct city{
    struct person CompanyEmployess[NumberOfEmployees];
};

typedef struct {
    struct city cityEmploye[10];
}IronCompany;

void Driver();
void Print_Empolyes(IronCompany _IronCompany);

int main() {
  Driver();
  return 0;
}

void Driver(){
   IronCompany _IronCompany;
   // Add Empolyee : Chon to tamrin ngofte ke khod karbar betone add kone man khodm chand ta add mikonm
   // CITY 0-----------------------------------------------------------------------------------------------------------
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[0].name, "Ali");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[0].lastname, "marii");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[0].city, "karaj");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[0].phoneNumber, "0915228043");
    _IronCompany.cityEmploye[0].CompanyEmployess[0].age = 19;
    _IronCompany.cityEmploye[0].CompanyEmployess[0].nationalCode = 205032217;
    _IronCompany.cityEmploye[0].CompanyEmployess[0].salary = 7000000;

    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[1].name, "mohmmad");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[1].lastname, "molaii");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[1].city, "karaj");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[1].phoneNumber, "0915228233");
    _IronCompany.cityEmploye[0].CompanyEmployess[1].age = 35;
    _IronCompany.cityEmploye[0].CompanyEmployess[1].nationalCode = 14432217;
    _IronCompany.cityEmploye[0].CompanyEmployess[1].salary = 5000000;

    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[2].name, "goli");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[2].lastname, "aalri");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[2].city, "karaj");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[2].phoneNumber, "091533133");
    _IronCompany.cityEmploye[0].CompanyEmployess[2].age = 23;
    _IronCompany.cityEmploye[0].CompanyEmployess[2].nationalCode = 2141175521;
    _IronCompany.cityEmploye[0].CompanyEmployess[2].salary = 3000000;


    // CITY 1----------------------------------------------------------------------------------------------------
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[0].name, "germez");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[0].lastname, "mwii");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[0].city, "Tehran");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[0].phoneNumber, "0912418043");
    _IronCompany.cityEmploye[1].CompanyEmployess[0].age = 59;
    _IronCompany.cityEmploye[1].CompanyEmployess[0].nationalCode = 205032217;
    _IronCompany.cityEmploye[1].CompanyEmployess[0].salary = 70144100;

    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[1].name, "abi");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[1].lastname, "molaii");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[1].city, "Tehran");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[1].phoneNumber, "0912241");
    _IronCompany.cityEmploye[1].CompanyEmployess[1].age = 25;
    _IronCompany.cityEmploye[1].CompanyEmployess[1].nationalCode = 124411423;
    _IronCompany.cityEmploye[1].CompanyEmployess[1].salary = 50041400;

    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[2].name, "zard");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[2].lastname, "aalri");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[2].city, "Tehran");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[2].phoneNumber, "091233133");
    _IronCompany.cityEmploye[1].CompanyEmployess[2].age = 33;
    _IronCompany.cityEmploye[1].CompanyEmployess[2].nationalCode = 2141175311;
    _IronCompany.cityEmploye[1].CompanyEmployess[2].salary = 3500050;

    Print_Empolyes(_IronCompany);
}

void Print_Empolyes(IronCompany _IronCompany){
    for(int i = 0; i < strlen(_IronCompany.cityEmploye);i++){
        printf("-----------%s-----------",_IronCompany.cityEmploye[i].CompanyEmployess[i].city);
        for (int j = 0; j < strlen(_IronCompany.cityEmploye[i].CompanyEmployess);j++) {
            printf("\n");
            printf("---Employe %d---\n",j);
            printf("name : %s\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].name);
            printf("lastName : %s\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].lastname);
            printf("city : %s\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].city);
            printf("phoneNumber : %s\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].phoneNumber);
            printf("age : %d\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].age);
            printf("nationCode : %d\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].nationalCode);
            printf("salary : %d\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].salary);
            printf("\n");
        }
    }
}



