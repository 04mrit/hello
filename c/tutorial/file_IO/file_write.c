#include <stdio.h>
void main(){
    FILE *ptr;
    ptr=fopen("generated.txt","w");
    fprintf(ptr,"hello");
    fclose(ptr);    
}