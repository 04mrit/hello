#include <stdio.h>
#include <stdlib.h>
void main(){
    int *ptr1,*ptr2;
    ptr1 = (int*)malloc(5 * sizeof(int));
    ptr2 = (int*)calloc(5 , sizeof(int));
    
    for (int i ; i< 5 ; i++){
        printf("%d\t",ptr1[i]);
    }

    printf("\n");

    for (int i ; i< 5 ; i++){
        printf("%d\t",ptr2[i]);
    }

    free(ptr1);
    free(ptr2);    
}