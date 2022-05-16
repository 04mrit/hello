#include <stdio.h>

typedef struct date {
    int d;
    int m;
    int y;
}date;

void main(){
    
    date nepathya ;//={21,2,2014};
    nepathya.d = 21;
    nepathya.m = 2;
    nepathya.y = 2011;
    printf("DATE(dd/mm/yy) : %d/%d/%d",nepathya.d,nepathya.m,nepathya.y);
}