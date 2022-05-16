#include <stdio.h>
void main(){
    // FILE *ptr = fopen("sample.txt","r");
    int num=0,num2=0;
    FILE *ptr;
    ptr = fopen("/home/amrit/git/backup/c/tutorial/file_IO/file_1.txt","r");

    if (ptr == NULL)
    {
        printf("File doesnt exist\n");
    }
    else{
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);

        fclose(ptr);    // we are not using file anymore !!

        printf("\nHAHA NUM IS %d\n",num);
        printf("\nHAHA NUM IS %d\n",num2);

    }
}