#include <stdio.h>
void main()
{
    FILE *ptr1,*ptr2;
    ptr1 = fopen("sample.txt", "r");
    ptr2 = fopen("cp.txt" , "w");
    char c = fgetc(ptr1);
    while (c != EOF)
    {
        fputc(c,ptr2);
        c = fgetc(ptr1);
    }

    fputc('\n' , ptr2);
    fclose(ptr2);
    ptr1 = fopen("sample.txt", "r");
    ptr2 = fopen("cp.txt" , "a");
    c = fgetc(ptr1);

    while (c != EOF)
    {
        fputc(c,ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr1);   
    fclose(ptr2);
}