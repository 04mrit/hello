#include <stdio.h>
void main(){
    int num,i=1;
    FILE *ptr;
    ptr = fopen("mul.txt","w");
    printf("Enter a number: ");
    scanf("%d",&num);
    while (i <= 10){
        fprintf(ptr , "%d X %d = %d\n" , num , i , num*i);
        i++;
    }
    fclose(ptr);
    printf("Multiplication calculated please open mul.txt!!");
}