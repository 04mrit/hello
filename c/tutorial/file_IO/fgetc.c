#include <stdio.h>
void main(){
    FILE *ptr;
    ptr = fopen("sample.txt","r");
    if (ptr == NULL){
        printf("Cant open file");
    }
    else
    {
        printf("%c", fgetc(ptr));
        printf("%c", fgetc(ptr));
        printf("%c", fgetc(ptr));
        printf("%c", fgetc(ptr));
        printf("%c", fgetc(ptr));
        printf("%c", fgetc(ptr));
        printf("%c", fgetc(ptr));
    }
    fputc('1',)
}