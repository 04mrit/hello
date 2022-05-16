#include <stdio.h>
#include <stdlib.h>
void main(){
    int *ptr1;

    ptr1 = (int*)malloc(5 * sizeof(int));

    for (int i ; i< 10 ; i++){
        printf("%d\t",ptr1[i]);
    }

    printf("\n");
    ptr1 = realloc(ptr1 , 10 * sizeof(int));

    for (int i ; i< 10 ; i++){
        printf("%d\t",ptr1[i]);
    }

    free(ptr1);    
}
realloc();
