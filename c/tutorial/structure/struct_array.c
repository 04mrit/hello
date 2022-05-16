#include <stdio.h>

struct emp{
    int code;
    float salery;
    char name[20];
};

void main(){
    int n=0;
    printf("enter no of employyees :");
    scanf("%d",&n);
    struct emp fb[n]; // ---->  declaring variable haha which type is emp;
    
    for (int j=0 ; j<n  ; j++){
        printf("enter  Code  of employee %d:",j);
        scanf("%d",&fb[j].code);
        printf("enter  Name  of employee %d:",j);
        scanf("%s",fb[j].name);
        printf("enter Salery of employee %d :",j);
        scanf("%f",&fb[j].salery);
    }
    printf("\ndisplaying results\n\n");

    for (int j=0 ; j<n  ; j++){
        printf("Code  of employee %d: %d\n",j,fb[j].code);
        printf("Name  of employee %d: %s\n",j,fb[j].name);
        printf("Salery of employee %d : %f\n",j,fb[j].salery);
    }
}   