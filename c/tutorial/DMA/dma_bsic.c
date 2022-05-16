#include <stdio.h>
#include <stdlib.h>
void main(){
    int *ptr;
    ptr = (int *) malloc( 5 * sizeof(int) ); //typecastig int* cause malloc returns pointer of void type!
    /// typecasting          returns size of 1 int in this maschine

    for (int i =0; i<5  ; i++){
        printf("the value of %d element : ",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i =0; i<5  ; i++){
        printf("\nValue of %d element is %d.",i+1,ptr[i]);
    }
    
    float *ptr2;
    ptr2 = (float*)malloc(5 * sizeof(float));
}