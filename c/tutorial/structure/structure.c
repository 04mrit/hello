#include <stdio.h>
#include <string.h>

struct emp{
    int code;
    float salery;
    char name[20];
};

void main(){
    struct emp amrit = {22,212.21,"amrit"};
    struct emp zero = {0};

    struct emp haha; // ---->  declaring variable haha which type is emp;
    haha.code = 21;
    haha.salery = 2022.21;
    strcpy(haha.name , "amrit");

    printf("Code : %d\n",haha.code);
    printf("Name : %s\n",haha.name);
    printf("Salery : %f\n\n",haha.salery);


    printf("Code : %d\n",zero.code);
    printf("Name : %s\n",zero.name);
    printf("Salery : %f\n\n",(&zero)->salery);
    
    printf("Code : %d\n",amrit.code);
    printf("Name : %s\n",amrit.name);
    printf("Salery : %f\n",(&amrit)->salery);
}   