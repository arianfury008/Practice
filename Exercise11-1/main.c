#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct measured_data_t{
    int site_id_num;
    int wind_speed;
    int day_of_month;
    int temperature;
};

int exterma();


int main() {
    struct measured_data_t measuredData[10];


    FILE *wether; // The C library function FILE

    wether=fopen("weather.txt","w");// create and open file // "w" mode : Creates an empty file for writing. If a file with the same name already exists, its content is erased and the file is considered as a new empty file.
    if (wether == NULL)
    {
        fputs("Error at opening File!", stderr); // if log not been created so return null we should send error then close program
        exit(1);
    }



    measuredData[0].site_id_num = 2001;
    measuredData[0].wind_speed = 11;
    measuredData[0].day_of_month = 11;
    measuredData[0].temperature = 30;

    measuredData[1].site_id_num = 2002;
    measuredData[1].wind_speed = 15;
    measuredData[1].day_of_month = 12;
    measuredData[1].temperature = 15;

    measuredData[2].site_id_num = 2003;
    measuredData[2].wind_speed = 7;
    measuredData[2].day_of_month = 13;
    measuredData[2].temperature = 5;

    measuredData[3].site_id_num = 2004;
    measuredData[3].wind_speed = 17;
    measuredData[3].day_of_month = 14;
    measuredData[3].temperature = 24;

    measuredData[4].site_id_num = 2005;
    measuredData[4].wind_speed = 10;
    measuredData[4].day_of_month = 15;
    measuredData[4].temperature = 23;

    measuredData[5].site_id_num = 2006;
    measuredData[5].wind_speed = 11;
    measuredData[5].day_of_month = 16;
    measuredData[5].temperature = 22;

    measuredData[6].site_id_num = 2007;
    measuredData[6].wind_speed = 13;
    measuredData[6].day_of_month = 17;
    measuredData[6].temperature = 11;

    measuredData[7].site_id_num = 2008;
    measuredData[7].wind_speed = 14;
    measuredData[7].day_of_month = 18;
    measuredData[7].temperature = 15;

    measuredData[8].site_id_num = 2009;
    measuredData[8].wind_speed = 22;
    measuredData[8].day_of_month = 19;
    measuredData[8].temperature = 35;

    measuredData[9].site_id_num = 2010;
    measuredData[9].wind_speed = 23;
    measuredData[9].day_of_month = 20;
    measuredData[9].temperature = 27;

    fwrite(&measuredData,sizeof(measuredData),1,wether); // Write to file
    fclose(wether); // close file

    printf("\n\nWeather registered !!!\n");

    exterma();

    return 0;
}

int exterma() {
    FILE *wether; // The C library function FILE

    wether = fopen("weather.txt","r"); // "r" Mode : Opens a file for reading. The file must exist.
    if (wether == NULL) // if log not been created so return null we should send error then close program
    {
        fputs("Error at opening File!", stderr); // stderr : the standard error message
        exit(1);
    }

    printf("========= Sorted Wind_speed ============");
    struct measured_data_t measuredData[10];

    while (fread(&measuredData,sizeof(measuredData),1,wether)){
        for (int i = 0; i < 9; ++i) {

            for (int j = i + 1; j < 9; ++j) {

                if (measuredData[i].wind_speed > measuredData[j].wind_speed) {

                    int a =  measuredData[i].wind_speed;
                    int b =  measuredData[i].site_id_num;
                    int c =  measuredData[i].day_of_month;
                    int d =  measuredData[i].temperature;


                    measuredData[i].wind_speed = measuredData[j].wind_speed;;
                    measuredData[j].wind_speed = a;

                    measuredData[i].site_id_num = measuredData[j].site_id_num;;
                    measuredData[j].site_id_num = b;

                    measuredData[i].day_of_month = measuredData[j].day_of_month;;
                    measuredData[j].day_of_month = c;

                    measuredData[i].temperature = measuredData[j].temperature;;
                    measuredData[j].temperature = d;
                }

            }
            printf("\n\nID          Day            WindSpeed          temperature\n\n");

            for(int i = 9; i >= 0 ;i--){
                printf("%d          %d            %d          %d\n",measuredData[i].site_id_num,measuredData[i].day_of_month,measuredData[i].wind_speed,measuredData[i].temperature);
            }
        }
    }



    fclose(wether); // close file

    return 1;

}