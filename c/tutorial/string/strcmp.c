#include <stdio.h>
#include <string.h>

void main(){
    char str1[50];
    char str2[50] ;
    printf("Enter a name : ");
    scanf("%s",str1);
    printf("\nEnter another name : ");
    scanf("%s",str2);
    if (strcmp(str1 , str2) == 0)
    {
        printf("\nthey are same name\n");
    }
    else {
        printf("\nthey are different name\n");
    }
}