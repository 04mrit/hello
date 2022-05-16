#include <stdio.h>
void main(){
    FILE *ptr;
    char c;
    ptr = fopen("sample.txt","r");
    c = fgetc(ptr);
    while (c != EOF){
        printf("%c",c);
        c = fgetc(ptr);
    }   
    ptr = fopen("sample.txt","a");
    fputc('!',ptr);
    fclose(ptr);
}