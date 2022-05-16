#include <stdio.h>
void main(){
    int num,i=1,j=1,spc;
    printf("enter a  number : ");
    scanf("%d",&num);
    spc=num;
    printf("\n");
    while(i<=num){
          while(j<=spc){
              printf(" ");
                j++;
          }
          j=1;

          while(j<=i){
              printf("* ");
                j++;
          }
          j=1;

      i++;
      spc--;
      printf("\n");
    }
}