#include <stdio.h>
void main(){
    int num,*ptr;
    ptr = (int*) malloc ( 10 * sizeof(int) );
    printf("Enter desired num : ");
    scanf("%d",&num);
    for (int i=0 ; i< 10 ; i++)
    {
        ptr[i] = (i+1) * num;
    }   
    for (int i=0 ; i< 10 ; i++)
    {
        printf("%d\n",ptr[i]);        
    }

    ptr = realloc(ptr , 15 * sizeof(int));

    for (int i=0 ; i< 15 ; i++)
    {
        ptr[i] = (i+1) * num;
    }   
    printf("\n\n\n");
    
    for (int j=0 ; j< 15 ; j++)
    {
        printf("%d\n",ptr[j]);        
    }    
}
