#include <stdio.h>

void revarr(int *ptr,int n){
    int temp = 0;
    int *max = ptr + n-1;
    // for (int i=0 ; i<= (n/2) ; i++){

    //     printf("before:\nptr=%d\n",*ptr);printf("max = %d\n",*max);printf("max_add = %u\n",max);printf("ptr_add = %u\n\n",ptr);
    //     temp = *ptr; 
    //     *ptr = *max; 
    //     *max = temp;
    //     max--;       
    //     ptr++;
    //     printf("after:\nptr=%d\n",*ptr);printf("max = %d\n",*max);printf("max_add = %u\n",max);printf("ptr_add = %u\n\n\n",ptr);
    // }
    temp = *ptr;
    *ptr = *max;
    *max = temp;    
}

void main(){
    int pon[] = {1,2,3,4,5};
    int *ptr=pon;
    revarr(ptr,5); printf("\n\n");
    while (*ptr != '\0'){
        printf("%d\n",*ptr);
        ptr++;
    }

}