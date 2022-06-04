#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Data{
    char name[20];
};

int WriteFile(FILE *file);
int ReadFile(FILE *file);
int ConvertFile(FILE *file, FILE *file2);

int main() {
   FILE *fp1 = fopen("file1.txt","w");

    WriteFile(fp1);

    fp1 = fopen("file1.txt","r");

    ReadFile(fp1);

    fp1 = fopen("file1.txt","r");
    FILE *fp2 = fopen("file2.txt","w");

    ConvertFile(fp1,fp2);

    return 0;
}

int WriteFile(FILE *file){
    struct Data data;

    strcpy(data.name,"hiALI");

    fwrite(&data,sizeof(data),1,file); // Write to file

    if (file == NULL)
    {
        puts("Could not open files");
        exit(0);
    }

    fclose(file);
    return 0;
}

int ReadFile(FILE *file){
    struct Data data;


    while(fread(&data,sizeof(data),1,file)) // Read from file
    {
        printf("name : %s\n",data.name);
    }

    fclose(file);

}

int ConvertFile(FILE *file , FILE *file2){
    struct Data data;
    struct Data data2;

    fread(&data,sizeof(data),1,file);

    for(int i = 0; i < strlen(data.name);i++){
        int b = data.name[i];
        if(isupper(b)){
          data2.name[i] = data.name[i];
        }
    }

    printf("name : %s\n",data2.name);

    fwrite(&data2,sizeof(data2),1,file2); // Write to file

    fclose(file);
    fclose(file2);
    return 0;
}