#include <stdio.h>

void main(){
    char amrit[]="hello darkness";
    char *ptr = amrit;
    printf("%s\n",ptr);
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
    
}