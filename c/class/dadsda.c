#include <stdio.h>
void main(){
    int num , spc, i = 1, j = 1, cnt = i;
    printf("enter a odd number : ");
    scanf("%d",&num);
    spc= num;
    while (cnt <= num*2){
        while (j < spc){
            printf(" ");
            j++;
        }
        j = 1;

        while (j <= i){
            printf("*");
            j++;
        }
        j = 1;
        printf("\n");
        cnt+=2;
        if (cnt <= num){
            i+=2;
            spc--;
        }
        else{
            i-=2;
            spc++;
        }
    }
}