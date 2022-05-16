#include <stdio.h>

void main(){
    FILE *pon;
    pon = fopen("sample.txt","r"); // opens for read mode
    pon = fopen("sample.txt","w"); // opens for write mode
    fclose(pon);
}