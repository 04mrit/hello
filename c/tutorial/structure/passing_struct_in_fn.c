#include <stdio.h>

struct emp{
    int code;
    float salery;
    char name[20];
};

void show(struct emp emp1){
    printf("code is : %d\n",  emp1.code);
    printf("salery is : %f\n", emp1.salery );
    printf("name is : %s\n",  emp1.name);
}

void main(){
    struct emp e1 = {11,21232.90,"name"};
    show(e1);
}