#include <stdio.h>

void main(){

    int num,ctr=0;
    int arr[10]={1,21,11,34,27,10,69,26,46,420};

    printf("Enter the no to be checked : ");
    scanf("%d",&num);

    for (int i=0 ; i< 10 ; i++){

        if (arr[i]==num){
            printf("\nNumber exist in given array!\n");
            ctr++;
            break;
        }
    }
    
    if (ctr==0)
    {
    printf("\nNumber doesnot exist in given array!\n");
    }

}
