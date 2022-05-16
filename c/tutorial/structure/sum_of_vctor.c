#include <stdio.h>

typedef struct vector{
    int x;
    int y;
}vtr;

vtr sumVctr(vtr v1,vtr v2){
    vtr result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

void main(){
    vtr v1={1,2};
    vtr v2={8,1};
    vtr sum;
    sum = sumVctr(v1,v2);
    printf("X : %d\nY : %d\n",sum.x,sum.y);
}