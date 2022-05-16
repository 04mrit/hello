#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salery;
    char name[20];
}emp;

typedef int helo; // helo can be used instead of int (alias)

void main(){
    helo haha=21;
   emp e1;
   emp *ptr;
   ptr = &e1;
   ptr->code = 21;
   ptr->salery = 9816.32;
   strcpy(ptr->name , "hello");
}